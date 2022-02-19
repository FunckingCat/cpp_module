#include <iostream>
#include <string>

typedef unsigned long uintptr_t;

typedef struct s_Data
{
	std::string str;
} Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *data = new Data;
	Data *after;
	uintptr_t ptr;
	data->str = "Serialization";
	std::cout << data << " : " << data->str << std::endl;

	ptr = serialize(data);
	after = deserialize(ptr);

	std::cout << after << " : " << after->str << std::endl;
	return (0);
}