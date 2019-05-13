#ifndef MINICAR_H
#define MINICAR_H

#include "Car.h"

class MiniCar : Car
{
	private:
		bool isMiniCooper;
	
	public:
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
