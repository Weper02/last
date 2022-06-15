#include "Ball.h"

ball::ball()
{
	radius = 1;
}

ball::ball(double Radius, double Volume, double Area) : radius(Radius), volume(Volume), area(Area) 
{


}

void ball::setRadius(double a)
{
	radius = a;
}

double ball::getRadius()
{
	return radius;
}

double ball::getVolume()
{
	return (static_cast<double>(4) / 3 * 3.14159 * radius* radius* radius);
}

double ball::getArea()
{
	return 4 * 3.14159 * radius* radius;
}
