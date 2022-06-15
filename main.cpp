#include<iostream>
#include<string>
#include<iomanip>
#include"Ball.h"
#include"Cube.h"
using namespace std;
int main() {
	int a, c;
	string b, d;
	cin >> a >> b >> c >> d;
	ball ball2;
	Cube Cube2;
	Cube2.setlength(c);
	Cube2.setColor(d);
	cout << "Ball" << endl << fixed << setprecision(1) << "radius:" << ball2.getRadius() << " area:" << ball2.getArea() << " Volume:" << ball2.getVolume()
		<< " color:" << ball2.getColor()<<endl;
	cout << "Cube" << endl << fixed << setprecision(1) << "length:" << Cube2.getlength() << " area:" << Cube2.getArea() << " Volume:" << Cube2.getVolume()
		<< " color:" << Cube2.getColor();


}