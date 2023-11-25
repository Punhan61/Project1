#include<iostream>
using namespace std;

#define tab "\t"

class Point
{
	double x;
	double y;
public:
	double get_x(double x)
	{
		return x;
	}
	double get_y(double y)
	{
		return y;
	}

	void set_x(double x)
	{
		x = x;
	}
	void set_y(double y)
	{
		y = y;
	}
};

void main()
{
	Point A;
	cout << A.get_x() << tab << A.get_y();
}