#include <iostream>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void)
{
	int r = rand() % 3;
	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << p << " is instance of A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << p << " is instance of B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << p << " is instance of C\n";
	else
		std::cout << p << " is not instance of A, B or C\n";
}

void identify(Base& p)
{
	try {
		dynamic_cast<A&>(p);
		std::cout << &p << " is instance of A\n";
		return ;
	} catch(std::exception &ex) {};

	try {
		dynamic_cast<B&>(p);
		std::cout << &p << " is instance of B\n";
		return ;
	} catch(std::exception &ex) {};

	try {
		dynamic_cast<C&>(p);
		std::cout << &p << " is instance of C\n";
		return ;
	} catch(std::exception &ex) {};

	std::cout << &p << " is not instance of A, B or C\n";
}

int main(void)
{
	srand(time(NULL));

	Base *ptrBase = new Base;
	Base *ptrA = new A;
	Base *ptrB = new B;
	Base *ptrC = new C;
	Base *rnd = generate();
	
	identify(ptrBase);
	identify(ptrA);
	identify(ptrB);
	identify(ptrC);
	identify(rnd);

	Base base;
	A a;
	B b; 
	C c;

	identify(base);
	identify(a);
	identify(b);
	identify(c);
	return (0);
}