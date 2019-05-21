#include "Car.h"

int main()
{
	// "new" isn't needed in C++, unless you explicitly need manual memory allocation
	// where you want the variable to exist outside of the scope. Java automatically
	// deletes "new" variables when it isn't needed, but it isn't perfect. With the 
	// way C++ allows YOU, the user, to do the memory allocation yourself, C++ uses
	// much less memory compared to a Java program.
	Car camry("Toyota", "Camry" , "Blue", 2019);
	
	// This is an example of making a variable with new. We'll talk about what "*"
	// is later
	Car* prius = new Car("Toyota", "Prius", "Blue", 2009);

	std::cout << camry.getMake() << std::endl;

	camry.paintCar("red");
	std::cout << camry.getColor() << std::endl;

	camry.startCar();
	return 0;
}
