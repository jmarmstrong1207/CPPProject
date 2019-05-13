#include<iostream>
#include<string>
using namespace std;

class Car{

private:
	string make;
	string model;
	string color;
	int year;

public:

	void setMake(string x){
		make = x;
	}
	string getMake(){
		return make;
	}
	void paintCar(string x){
		color = x;
	}
	string getColor(){
		return color;
	}
	void startCar(){
		cout << "Engine Started" << endl;
	}
};

int main(){
	Car camry;
	camry.setMake("Toyota");
	cout << camry.getMake() << endl;
	camry.paintCar("red");
	cout << camry.getColor() << endl;
	camry.startCar();
	return 0;
};