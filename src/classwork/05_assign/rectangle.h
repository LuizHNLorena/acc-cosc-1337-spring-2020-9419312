/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

//a) In file rectangle.h, write Rectangle class function signature for overloading the << operator,

#include<iostream>


class rect
{
public: 
	rect() = default;
	rect(int w, int h) : width{ w }, height{ h } { calculate_area(); }
	int get_area() const { return area; }
	friend std::ostream& operator<<(std::ostream& out, const rect& r);

private: 

	int area;
	int width; 
	int height; 
    void calculate_area();

};