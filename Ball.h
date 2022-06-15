#ifndef Ball_h
#define Ball_h
#include "GeometricObject.h"
using namespace std;
class ball:public GeometricObject {
private:
	double radius;
	double volume;
	double area;
public:
	ball();
	ball(double, double, double);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
};







#endif // !ball_h
