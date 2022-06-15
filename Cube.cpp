#include "Cube.h"

void Cube::setlength(double a)
{
	length = a;
}

double Cube::getlength()
{
	return length;
}

double Cube::getVolume()
{
	return length*length*length;
}

double Cube::getArea()
{
	return  6*length*length;
}
