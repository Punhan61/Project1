#include<iostream>
#include"Area.h"
using namespace std;

//#define AREA

void main()
{
	setlocale(LC_ALL, "");

#ifdef AREA
	cout << "��������� ������� ����� � ���������� ��������: " << endl;
	cout << "������� 'z' ��� ����� � '�' ��� ��������: ";

	char simbol = 'z'; cin >> simbol;

	cout << "������� ������: ";
	double radius = 0; cin >> radius;

	if (simbol == 'z')
	{
		cout << "������� ������: ";
		double height = 0; cin >> height;

		cout << "����������� ��������: " << Area(radius, height) << endl;
	}
	else
	{
		cout << "������� �����: " << Area(radius) << endl;
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


