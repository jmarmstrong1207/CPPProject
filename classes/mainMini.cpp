#include "MiniCar.h"


int main()
{

MiniCar smallVan("Toyota","miniVan", "blue",2000,false );

std::cout<<smallVan.getIsMiniCooper()<<std::endl;

smallVan.paintCar("green");
std::cout<<smallVan.getColor()<<std::endl;

smallVan.startCar();

return 0;
}
