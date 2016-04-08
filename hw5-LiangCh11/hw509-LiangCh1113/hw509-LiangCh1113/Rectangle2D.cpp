#include "Rectangle2D.h"

Rectangle2D::Rectangle2D() // Default Constructor
{
	x = 0;
	y = 0;
	width - 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double subX, double subY, double subWidth, double subHeight)
{
	x = subX; // 
	y = subY;
	width = subWidth;
	height - subHeight;
}

const double Rectangle2D::getX() //Assessors
{ return x; }

const double Rectangle2D::getY()
{ return y; }

const double Rectangle2D::getWidth()
{ return width; }

const double Rectangle2D::getHeight()
{ return height; }

const void Rectangle2D::setX(double newX) // Mutators
{ x = newX; }

const void Rectangle2D::setY(double newY)
{ y = newY; }

const void Rectangle2D::setWidth(double newWidth)
{ width = newWidth; }

const void Rectangle2D::setHeight(double newHeight)
{ height = newHeight; }

const double Rectangle2D::getArea() // Equation for calculating the area of the rectangle
{
	double area = (width * height);
	return area;
}

const double Rectangle2D::getPerimeter() // Equation for calculating the perimeter of the rectangle
{
	double perimeter = ((2 *width) + (2*height));
	return perimeter;
}

const bool Rectangle2D::contains(double pointX, double pointY) // Sees if the rectangle includes a specific point
{
	bool contains = false;
	if ((pointX <= ((width / 2) + x) && (pointX >= ((-width / 2) + x))) && ((pointY <= ((height / 2) + y)) && (pointY >= ((-height / 2) + y))))
		contains = true; // If equation is able to find point, then returns true
	return contains;
}

const bool Rectangle2D::contains(const Rectangle2D &r) // Sees if there is there is another rectangle in orginal rectangle    
{
	bool contains = false; 
	if ((((r.width / 2) + r.x) <= ((width / 2) + x)) && (((-r.width / 2) + r.x) >= ((-width / 2) + x)) && (((r.height / 2) + r.x) <= ((height / 2) + x)) && (((-r.height / 2) + r.x) >= ((-height / 2) + x)))
		contains = true; // Checks to see if the given sides are in the original and return true
	return contains;
}

const bool Rectangle2D::overlap(const Rectangle2D &r) // Sees if another rectangle overlaps the original rectangle
{
	bool overlap;
	if ((((r.width / 2) + r.x) <= ((width / 2) + x)) || (((-r.width / 2) + r.x) >= ((-width / 2) + x)) || (((r.height / 2) + r.x) <= ((height / 2) + x)) || (((-r.height / 2) + r.x) >= ((-height / 2) + x)))
		overlap = true; // Checks to see if the given sides are in the original and return true
	return overlap;
}
