#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
//#include"FillRand.cpp"   //Реализации НЕшаблонных функций никода не подключаются на место вызова
#include"Print.h"
#include"Print.cpp"        //Реализации шаблонных функций в обязательном порядке подключаются на место вызова 
#include"Sort.h"
#include"Sort.cpp"
#include"MathOp.h"
#include"MathOp.cpp"
#include"Shift.h"
#include"Shift.cpp"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	
	


	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	
	

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 1, 100);
	Print(i_arr_2, ROWS, COLS);
	//Sort(i_arr_2, ROWS, COLS);        //не работатет сортировка, если ее включить,
	//Print(i_arr_2, ROWS, COLS);       //то после нее не работает ничего.
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвиогов: "; cin >> number_of_shifts;
	ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}





