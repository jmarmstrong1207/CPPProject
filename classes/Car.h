/*
 * Defines this file as CAR_H to the compiler. Makes it so that it doesn't
 * import this file multiple times.
 * For example: an x.cpp & y.cpp file both does "#include 'Car.h'"
 * Without #ifndef & #define, it will copy-paste the code in both x.cpp and y.cpp,
 * and if x.cpp includes y.cpp, it will detect the multiple copy-pastes and will
 * not compile.
 */

// "If this file isn't defined as CAR_H already, define it as CAR_H"
#ifndef CAR_H 
#define CAR_H

#include<iostream>

// String class
#include<string>

// You don't use "using namespace std;" in a header file. It makes all the files
// that include this header file use namespace std as well
class Car{
	private:
		std::string make;
		std::string model;
		std::string color;
		int year;

	public:
		Car(std::string mak, std::string mod, std::string col, int y)
		{
			make = mak;
			model = mod;
			color = col;
			year = y;
		}

		void setMake(std::string x)
		{
			make = x;
		}

		std::string getMake()
		{
			return make;
		}

		void paintCar(std::string x)
		{
			color = x;
		}

		std::string getColor()
		{
			return color;
		}

		void startCar()
		{
			// endl is like "\n", but it flushes the buffer, which is a diff topic
			std::cout << "Engine Started" << std::endl;
		}
};
 
#endif // Tells the compiler that CAR_H ends here
