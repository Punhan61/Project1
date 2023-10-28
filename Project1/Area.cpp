#include"Area.h"

double Area(double radius)
{
	radius = Pi * (radius * 2);
	return radius;
}

double Area(double radius, double height)
{
	return 2 * Area(radius) + 2 * Pi * radius * height;
}