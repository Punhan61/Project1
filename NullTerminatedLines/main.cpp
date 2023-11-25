#include<iostream>
using namespace std;

int stringlength(const char str[]);
void upper_case(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	
	const char size=20;
	char str[size] = {};

	cout << "¬ведите строку: ";
	cin.getline(str, size);

	cout << stringlength(str);

}

int stringlength(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void upper_case(char str[])
{
	int i = 0;
	for (; str[i]; i++);
}