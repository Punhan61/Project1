#include<iostream>
#include"Area.h"
using namespace std;

//#define AREA

void main()
{
	setlocale(LC_ALL, "");

#ifdef AREA
	cout << "Вычесляем площадь круга и повехность цилиндра: " << endl;
	cout << "Введите 'z' для круга и 'с' для цилиндоа: ";

	char simbol = 'z'; cin >> simbol;

	cout << "введите радиус: ";
	double radius = 0; cin >> radius;

	if (simbol == 'z')
	{
		cout << "Введите высоту: ";
		double height = 0; cin >> height;

		cout << "Поверхность цилиндра: " << Area(radius, height) << endl;
	}
	else
	{
		cout << "Площадь круга: " << Area(radius) << endl;
	}
#endif // AREA

    int n = 5;
	int shift = 2;
	int arr[] = {1,2,3,4,5};
	
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
}


