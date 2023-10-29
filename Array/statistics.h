#pragma once
#include"constants.h"

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);

int Sum(int arr[rows][cols], const int rows, const int cols);
double Sum(double arr[rows][cols], const int rows, const int cols);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);

double Avg(int arr[rows][cols], const int rows, const int cols);
double Avg(double arr[rows][cols], const int rows, const int cols);

int Min_Value(int arr[], const int n);
double Min_Value(double arr[], const int n);
char Min_Value(char arr[], const int n);

int Min_Value(int arr[rows][cols], const int rows, const int cols);
double Min_Value(double arr[rows][cols], const int rows, const int cols);

int Max_Value(int arr[], const int n);
double Max_Value(double arr[], const int n);
char Max_Value(char arr[], const int n);

int Max_Value(int arr[rows][cols], const int rows, const int cols);
double Max_Value(double arr[rows][cols], const int rows, const int cols);