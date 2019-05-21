#ifndef MINICAR_H
#define MINICAR_H

#include "Car.h"

// Inheriting a class is implicitly private. This means that MiniCar wouldn't be
// able to access Car's public functions. You have to make the superclass Car public.
// The access modifier makes all of the variables and functions with access modifiers
// that are higher (more exposed) turn into the given access modifier. Because public is
// the highest access modifier, it will not change any of the variables' access modifier
class MiniCar : public Car
{
	private:
		bool isMiniCooper;
	
	public:
		// ": Car(...)" is the way to initialize the constructor of the superclass.
		// This is another way to initialize variables too, but it isn't something
		// we're going to talk about
		MiniCar(std::string make, std::string model, std::string color,
				int year, bool isMiniCooper) : Car(make, model, color, year)
		{
			this->isMiniCooper = isMiniCooper; // "this" is a pointer	
		}

		bool getIsMiniCooper()
		{
			return isMiniCooper;
		}

		void setIsMiniCooper(bool x)
		{
			isMiniCooper = x;
		}
};

#endif
