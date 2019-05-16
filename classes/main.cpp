#include "Car.h"

int main()
{
	
	Car camry("Toyota", "Camry" , "Blue", 2019);
	std::cout << camry.getMake() << std::endl;

	camry.paintCar("red");
	std::cout << camry.getColor() << std::endl;

	camry.startCar();
	return 0;
}
