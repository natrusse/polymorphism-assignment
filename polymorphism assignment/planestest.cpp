#include <iostream>
#include <iomanip>
#include "planes.h"
using namespace std;

// sets the input parameters for the display

// todo add at least 2 more attributes to the child classes and print out the info in display


void main() {
	Plane plane1;  // default constructor
	plane1.display();
	Plane plane2 = Plane("Test", "red");
	plane2.display();

	C205 C205S3 = C205("Rect1", "green", 10);
	C205S3.display();

	C202 C202EC = C202("Cir1", "blue", 5);
	C202EC.display();

	system("pause");
}