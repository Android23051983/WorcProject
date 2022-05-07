#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "----------------------------------------------------------------------------" << endl;

	const int m = 8;
	float brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;
	Sort(brr, m);
	Print(brr, m);
	cout << "----------------------------------------------------------------------------" << endl;

	const int l = 4;
	char crr[l];
	FillRand(crr, l);
	Print(crr, l);
	cout << "Сумма элементов массива: " << Sum(crr, l) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, l) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, l) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, l) << endl;
	Sort(crr, l);
	Print(crr, l);
}





