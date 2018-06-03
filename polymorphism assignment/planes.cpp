#include <iostream>
#include <iomanip>
#include <string>
#include "planes.h"

using namespace std;

// defines the functions in the planes.h file (the public functions)
// inheritance is child classes taking from a parent class
// polymorphism is changing the inheritance (display function in this assignment)


Plane::Plane() {} // namespace (says that this function applies to the plane class)
Plane::~Plane() { cout << "Plane destructor called."; }

Plane::Plane(string N, string C) {
	name = N;
	color = C;
}

string Plane::getName() { return name; }
void Plane::setName(string N) { name = N; }

string Plane::getColor() { return color; }
void Plane::setColor(string C) { color = C; }

void Plane::display() {
	cout << "This Plane is named " << name << " with "
		<< color << " color." << endl << endl;
}

C202::C202() {} // namespace
C202::C202(string N, string C, int R)
{
	name = N;
	color = C;
	radius = R;
}
int C202::getRadius() { return radius; }
void C202::setRadius(int R) { radius = R; }
void C202::display() { // what the executable displays
	cout << "This plane is called a " << name
		<< " with " << color << " color,\n"
		<< "and radius = " << radius << endl << endl;
}
void C202::display(bool displayVal) { // what the executable displays
	Plane::display();

	if (displayVal == true) {
		cout << "Radius: " << radius << endl; // static polymorphism (adds a parameter value that changes some aspect of the function)
	}
}

C205::C205() {} // namespace
C205::C205(string N, string C, int R)
{
	name = N;
	color = C;
	radius = R;
}
int C205::getRadius() { return radius; }
void C205::setRadius(int R) { radius = R; }
void C205::display() { // what the executable displays
	cout << "This plane is called a " << name
		<< " with " << color << " color,\n"
		<< "and radius = " << radius << endl << endl;
}


//C205::C205(string rName, string rColor, int rWidth, int rHeight)
//	: Plane::Plane(rName, rColor)
//{
//	width = rWidth;
//	height = rHeight;
//}
//int C205::getWidth() { return width; }
//void C205::setWidth(int W) { width = W; }
//int C205::getHeight() { return height; }
//void C205::setHeight(int H) { height = H; }
//void C205::display() {
//	Plane::display();
//	cout << "It is a C205 with width = " << width
//		<< ", and height = " << height << endl << endl;
//}
//void C205::display(bool details) {
//	Plane::display();
//	if (details) {
//		cout << "It is a C205 with width = " << width
//			<< ", and height = " << height << endl << endl;
//	}
//}