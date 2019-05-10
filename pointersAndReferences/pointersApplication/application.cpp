#include <iostream>
#include <string>

class PointerApplication
{
	public:
		static void changeNameWithoutPointer(std::string n)
		{
			n = "Name hasn't changed";
		}

		static void changeNameWithPointer(std::string* n)
		{
			*n = "Name changed";
		}

		static void changeNameWithReference(std::string& n)
		{
			n = "Name changed with reference";
		}

};

int main()
{
	std::string name = "James";
	PointerApplication::changeNameWithoutPointer(name);
	std::cout << name << std::endl;

	PointerApplication::changeNameWithPointer(&name);
	std::cout << name << std::endl;

	PointerApplication::changeNameWithReference(name);
	std::cout << name << std::endl;
	return 0;
}
