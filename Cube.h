#ifndef Cube_h
#define Cube_h
#include "GeometricObject.h"
using namespace std;
class Cube :public GeometricObject {
private:
	double length;
	double volume;
	double area;
public:
	void setlength(double);
	double getlength();
	double getVolume();
	double getArea();
};







#endif 
