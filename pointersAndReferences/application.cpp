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
	// This is an example of using "new" in C++. Just like Java,
	// the x variable is a pointer to an address of a class "Car". The
	// only difference is that is it explicitly a pointer.
	// Car* x = new Car();

	///////////////////////////////////////////////
	std::string name = "James";

	// Name won't be changed
	PointerApplication::changeNameWithoutPointer(name);
	std::cout << name << std::endl;

	// Name will be changed
	PointerApplication::changeNameWithPointer(&name);
	std::cout << name << std::endl;

	// Name will be changed. This way is preferred because
	// You only use pointers when you absolutely need to. They are relatively
	// dangerous if used wrong
	PointerApplication::changeNameWithReference(name);
	std::cout << name << std::endl;
	return 0;
}
