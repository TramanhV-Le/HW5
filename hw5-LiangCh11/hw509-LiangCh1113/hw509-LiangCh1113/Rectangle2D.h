#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D();
	Rectangle2D(double, double, double, double);
	const double getX();
	const double getY();
	const double getWidth();
	const double getHeight();
	const void setX(double);
	const void setY(double);
	const void setWidth(double);
	const void setHeight(double);
	const double getArea();
	const double getPerimeter();
	const bool contains(double, double);
	const bool contains(const Rectangle2D&);
	const bool overlap(const Rectangle2D&);
};
#endif