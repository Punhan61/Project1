#pragma once

int** Allocate(const int rows, const int cols);
void Clear(int** arr, const int rows);

void Fill_Rand(int arr[], const int n);
void Fill_Rand(int** arr, const int rows, const int cols);

void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);

int* Push_Back(int* arr, int& n, int value);
int* Push_Front(int* arr, int& n, int value);

int** Push_row_Back(int** arr, int& rows, const int cols);
int** Push_row_Front(int** arr, int& rows, const int cols);

int* Pop_Back(int* arr, int& n);
int** Pop_row_Back(int** arr, int& rows, const int cols);

int* Pop_Front(int* arr, int& n);
int** Pop_row_Front(int** arr, int& rows, const int cols);

int* Insert(int* arr, int& n, int index, int value);
int** Insert_Row(int** arr, int& rows, int cols, int index);

int* Erase(int* arr, int& n, int index);
int** Erase_Row(int** arr, int& rows, int cols, int index);
