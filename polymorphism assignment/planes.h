#ifndef PLANES_H //pragma once only works on windows. using ifndef and endif allows multi platform use
#define PLANES_H

#include <string>
using namespace std;

//parent class
class Plane {
public:
	// public constructor (anything here can be accessed externally)
	//lines 12 and 13 construct the class
	Plane(); // default constructor
	Plane(std::string N, string C); // custom constructor (builds class based on given parameters)
	~Plane(); // deconstructor (removes class from memory)

	string getName(); // get functions take parameters in a class and returns them to other processes
	void setName(string); // setter functions set the value for the above attribute
	string getColor();
	void setColor(string);
	void display(); // displays attribute values in executable
protected: // can only be accessed by authorized programs
	string name;
	string color;
private: // can only be accessed by this class
};


//child class 1
class C202 : public Plane { // public plane means that the class is inheriting data from the parent
public:
	C202(); // constructor
	C202(string N, string C, int R); // constructor
	int getRadius(); // getter function
	void setRadius(int); // setter function
	void display();
	void display(bool);
private:
	int radius; // radius cannot be accessed outside of this class
};

//child class 2
class C205 : public Plane {
public:
	C205();
	C205(string N, string C, int R);
	int getRadius();
	void setRadius(int);
	void display();
private:
	int radius;
	
	
	/*C205();
	C205(string rName, string rColor, int rWidth, int rHeight);
	int getWidth();
	void setWidth(int rWidth);
	int getHeight();
	void setHeight(int rHeight);
	void display();
	void display(bool details);
private:
	int width;
	int height;*/
};

#endif