/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

#include<string>


class rect
{
public: 
	rect(int l, int w) : width{ l }, height{ w }, { calculate_area(); }
  int get_area() const{ return width, height, calculate_area}

private: 
	int width, height, area; 
	void calculate_area();

};