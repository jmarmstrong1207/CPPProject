#include <iostream>
#include <string>

int main()
{
	int x = 1;

	int* p = &x;

	std::cout << "What address p is pointing to: " << p << std::endl;
	
	std::cout << "What p is pointing to: " << *p << std::endl;

	std::cout << "Address of p itself: " << &p << std::endl;

	
	return 0;
}
