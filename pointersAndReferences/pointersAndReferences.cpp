#include <iostream>
#include <string>

int main()
{
	int x = 1;

	// * = pointers. & = reference (memory address)
	int* p = &x;

	std::cout << "What address p is pointing to: " << p << std::endl;
	
	std::cout << "What the value of the variable p is pointing to: " << *p << std::endl;

	std::cout << "Address of p itself: " << &p << std::endl;

	
	return 0;
}
