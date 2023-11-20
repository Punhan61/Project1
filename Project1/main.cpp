#include<iostream>
#include"Area.h"
#include<deque>
using namespace std;

//#define AREA
//#define SHIFT

void Fill_Rand(int arr[], int n);
void Print(int arr[], int n);
int* Push_Back(int* arr, int& n, int value);
int* Push_Front(int* arr, int& n, int value);

int* Pop_Back(int* arr, int& n);



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

#ifdef SHIFT
	int n = 5;
	int shift = 2;
	int arr[] = { 1,2,3,4,5 };

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
#endif // SHIFT

	/*int n = 5;
	int* arr = new int[n];

	Fill_Rand(arr, n);
	Print(arr, n);
	cout << endl;

	int value;
	cout << "Добавте значение в конец массива: "; cin >> value;

	arr = Push_Back(arr, n, value);
	Print(arr, n);
	cout << endl;

	cout << "Добавте значение в начало массива: "; cin >> value;
	arr = Push_Front(arr, n, value);
	Print(arr, n);
    
	cout << "Удалите значение в конце массива: ";
	arr = Pop_Back(arr, n);
	Print(arr, n);

	delete[]arr;*/

	deque <int> c1;

	c1.push_front(1);
	if (c1.size() != 0)
		cout << "First element: " << c1.front() << endl;

	c1.push_front(2);
	if (c1.size() != 0)
		cout << "New first element: " << c1.front() << endl;
}

void Fill_Rand(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}

void Print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* Push_Back(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}

int* Push_Front(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1];

	for (int i = 1; i <= n; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}

int* Pop_Back(int* arr, int& n)
{
	int* buffer = new int[n - 1];

	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}