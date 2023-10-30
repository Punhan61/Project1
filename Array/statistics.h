#pragma once
#include"constants.h"

template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[rows][cols], const int rows, const int cols);

template<typename T> double Avg(T arr[], const int n);
char Avg(char arr[], const int n);
template<typename T> double Avg(T arr[rows][cols], const int rows, const int cols);

template<typename T> T Min_Value(T arr[], const int n);
template<typename T> T Min_Value(T arr[rows][cols], const int rows, const int cols);

template<typename T> T Max_Value(T arr[], const int n);
template<typename T> T Max_Value(T arr[rows][cols], const int rows, const int cols);
