#include "Converter.hpp"

const std::string Converter::types_out[4] = {
	CHAR, INT, FLOAT, DOUBLE
};

Converter::Converter(std::string input)
{
	this->input = input;
	for (size_t i = 0; i < 4; i++)
		this->impos[i] = 0;
	this->parse();
	if (this->type == Invalid)
	{
		this->impos[Char] = 1;
		this->impos[Int] = 1;
		this->impos[Float] = 1;
		this->impos[Double] = 1;
	}
	else
	{
		this->convert();
		if (this->impos[Int] || this->iint > 127 || this->iint < 0)
			this->impos[Char] = 1;
		else if (!std::isprint(this->ichar))
			this->impos[Char] = 2;
	}
}

Converter::Converter(Converter const &other)
{
	(void)other;
}

Converter::~Converter()
{
}

Converter &Converter::operator=(Converter const &other)
{
	(void)other;
	return (*this);
}

void	Converter::convert(void)
{
	switch (this->type)
	{
	case Char:
		this->iint = static_cast<int>(this->ichar);
		this->ifloat = static_cast<float>(this->ichar);
		this->idouble = static_cast<double>(this->ichar);
		break;
	case Int:
		this->ichar = static_cast<char>(this->iint);
		this->ifloat = static_cast<float>(this->iint);
		this->idouble = static_cast<double>(this->iint);
		break;
	case Float:
		this->ichar = static_cast<char>(this->ifloat);
		this->iint = static_cast<int>(this->ifloat);
		this->idouble = static_cast<double>(this->ifloat);
		if (!(!(std::isnan(this->ifloat) || std::isinf(this->ifloat)))
			|| this->ifloat > std::numeric_limits<int>::max()
			|| this->ifloat < std::numeric_limits<int>::min())
			this->impos[Int] = 1;
		break;
	case Double:
		this->ichar = static_cast<char>(this->idouble);
		this->iint = static_cast<int>(this->idouble);
		this->ifloat = static_cast<float>(this->idouble);
		if (!(!(std::isnan(this->idouble) || std::isinf(this->idouble)))
			|| this->idouble > std::numeric_limits<int>::max()
			|| this->idouble < std::numeric_limits<int>::min())
			this->impos[Int] = 1;
		break;
	default:
		break;
	}
}

void	Converter::parse(void)
{
	std::stringstream ss;
	int i = 0;

	if (this->input.length() == 1 && !std::isdigit(this->input[0]))
	{
		this->ichar = this->input[0];
		this->type = Char;
		return ;
	}
	if (this->input[i] == '+' || this->input[i] == '-')
		ss << this->input[i++];
	this->type = Int;
	for (; i < this->input.length(); i++)
	{
		if (this->input[i] == '.' && this->type != Double)
		{
			this->type = Double;
			ss << this->input[i];
		}
		else if (this->input[i] == 'e' && i < this->input.length() - 1
			&& (this->input[i + 1] == '-'
				|| this->input[i + 1] == '+'
				|| std::isdigit(this->input[i + 1])))
		{
			ss << this->input[i] << this->input[i + 1];
			i++;
			this->type = Double;
		}
		else if (this->input[i] == 'f' && i == this->input.length() - 1 && this->type == Double)
			this->type = Float;
		else if (!std::isdigit(this->input[i]))
		{
			this->type = Invalid;
			i = this->input.length();
		}
		else
			ss << this->input[i];
	}
	if (this->type == Float)
		ss >> this->ifloat;
	else if (this->type == Double)
		ss >> this->idouble;
	else if (this->type == Int)
	{
		long lvalue;
		ss >> lvalue;
		this->iint = lvalue;
		if (ss.fail()
			|| lvalue > std::numeric_limits<int>::max()
			|| lvalue < std::numeric_limits<int>::min())
			this->type = Invalid;
	}
	else if (this->type == Invalid)
	{
		if (this->input == "inff" || this->input == "-inff" || this->input == "+inff"
			|| this->input == "nanf")
		{
			this->ifloat = atof(this->input.c_str());
			this->type = Float;
		}
		else if (this->input == "inf" ||  this->input == "-inf" || this->input == "+inf"
				|| this->input == "nan")
		{
			this->idouble = atof(this->input.c_str());
			this->type = Double;
		}
	}
}

void	Converter::print(void)
{
	for (size_t i = Char; i < Invalid; i++)
	{
		std::cout << Converter::types_out[i];
		if (this->impos[i] == 2)
			std::cout << ND << std::endl;
		if (this->impos[i] == 1)
			std::cout << IMP << std::endl;
		if (this->impos[i] == 0)
		{
			switch (i)
			{
			case Char:
				std::cout << "'" << this->ichar << "'" << std::endl;
				break;
			case Int:
				std::cout << this->iint << std::endl;
				break;
			case Float:
				std::cout << this->ifloat;
				if (this->ifloat - static_cast<float>(this->iint) == 0)
					std::cout << ".0";
				std::cout << "f" << std::endl;
				break;
			case Double:
				std::cout << this->idouble;
				if (this->idouble - static_cast<double>(this->iint) == 0)
					std::cout << ".0";
				std::cout << std::endl;
				break;
			}
		}
	}
}
