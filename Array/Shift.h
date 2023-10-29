#pragma once
#include"constants.h"

void Shift_Left(int arr[], const int n, int shift);
void Shift_Left(double arr[], const int n, int shift);
void Shift_Left(char arr[], const int n, int shift);

void Shift_Left(int arr[rows][cols], const int rows, const int cols, int shift);
void Shift_Left(double arr[rows][cols], const int rows, const int cols, int shift);

void Shift_Right(int arr[], const int n, int shift);
void Shift_Right(double arr[], const int n, int shift);
void Shift_Right(char arr[], const int n, int shift);

void Shift_Right(int arr[rows][cols], const int rows, const int cols, int shift);
void Shift_Right(double arr[rows][cols], const int rows, const int cols, int shift);
