#include"stdafx.h"
#include"Functions.h"

//#define DYNAMIC_MAMORY_1

void main()
{
	setlocale(LC_ALL, "");

#ifdef DYNAMIC_MAMORY_1
	int n = 5;
	int* arr = new int[n];
	int value, index;

	Fill_Rand(arr, n);
	Print(arr, n);
	cout << endl;

	cout << "������� �������� � ����� �������: "; cin >> value;

	arr = Push_Back(arr, n, value);
	Print(arr, n);
	cout << endl;

	cout << "������� �������� � ������ �������: "; cin >> value;
	arr = Push_Front(arr, n, value);
	Print(arr, n);
	cout << endl;

	cout << "�������� �������� � ����� �������: " << endl;
	arr = Pop_Back(arr, n);
	Print(arr, n);
	cout << endl;

	cout << "�������� �������� � ������ �������: " << endl;
	arr = Pop_Front(arr, n);
	Print(arr, n);
	cout << endl;

	cout << "������� ������ ������������ ��������: "; cin >> index;
	cout << "������� �������� ��������: "; cin >> value;
	arr = Insert(arr, n, index, value);
	Print(arr, n);
	cout << endl;

	cout << "������� ������ ���������� ��������: "; cin >> index;
	arr = Erase(arr, n, index);
	Print(arr, n);
	cout << endl;

	delete[]arr;
#endif // DYNAMIC_MAMORY_1

	int rows;
	int cols;
    
	cout << "������� ���������� �����: "; cin >> rows;
	cout << "������� ���������� ��������� ������: "; cin >> cols;

	int** arr = Allocate(rows, cols);

	Fill_Rand(arr, rows, cols);
	Print(arr, rows, cols);
	
	cout << "����������� � ����� ������: " << endl;

	arr = Push_row_Back(arr, rows, cols);
	Print(arr, rows, cols);

	cout << "����������� � ������ ������: " << endl;
	arr = Push_row_Front(arr, rows, cols);
	Print(arr, rows, cols);

	cout << "������� ������ � ����� ������� : " << endl;
	arr = Pop_row_Back(arr, rows, cols);
	Print(arr, rows, cols);

	cout << "������� ������ � ������ ������� : " << endl;
	arr = Pop_row_Front(arr, rows, cols);
	Print(arr, rows, cols);

	int index;
	cout << "��������� ������ �� �������: "; cin >> index;
	arr = Insert_Row(arr, rows, cols,index);
	Print(arr, rows, cols);

	cout << "������� ������ �� �������: "; cin >> index;
	arr = Erase_Row(arr, rows, cols, index);
	Print(arr, rows, cols);

	Clear(arr,rows);

}

