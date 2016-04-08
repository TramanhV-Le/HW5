#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main() 
{
	Rectangle2D r1(2, 2, 5.5, 4.9); // Given 
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "Rectangle r1 has area of " << r1.getArea() << endl; // Outputs the area for original rectangle
	cout << "Rectangle r1 has the perimeter of " << r1.getPerimeter() << endl; // Outputs the perimeter for original rectangle

	if (r1.contains(3, 3) == true) // If given coordinates are inside, output true
		cout << "Rectangle r1 does include the coordinates (3, 3) \n";
	else
		cout << "Rectangle r1 does not include coordinates (3, 3) \n";

	if (r1.contains(r2) == true) // Outputs whether or not r2 is in r1
		cout << "Rectangle r1 does contain r2 \n";
	else 
		cout << "Rectangle r1 does not contain r2 \n";

	if (r1.overlap(r3) == true) // Outputs whether or not r3 is in r1
		cout << "Rectangle r1 overlaps r3 \n";
	else 
		cout << "Rectangle r1 does not contain r2 \n";
}