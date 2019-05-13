#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<string>
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

		void setMake(std::string x){
			make = x;
		}

		std::string getMake(){
			return make;
		}

		void paintCar(std::string x){
			color = x;
		}

		std::string getColor(){
			return color;
		}

		void startCar(){
			std::cout << "Engine Started" << std::endl;
		}
};


#endif
