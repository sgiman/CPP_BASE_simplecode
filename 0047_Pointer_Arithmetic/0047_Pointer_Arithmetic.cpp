﻿//*****************************************************************************************************
// Арифметика указателей.  Указатели и массивы. Массив это указатель. | C++ для начинающих | Урок #47
// ----------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ----------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//*****************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

/*--- АРИФМЕТИКА УКАЗАТЕЛЕЙ ---*/

int main()
{
	setlocale(LC_ALL, "ru");

	// Имя массива - это указатель на его первый элемент (эквивалентно : int *pArr = arr)

	const int SIZE = 5;

	int arr[SIZE] = { 4, 55, 79, 1, 4 };

	cout << endl;

	cout << "Масcив \"arr\":" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\tarr[" << i << "]\t" << arr[i] << endl;
	}

	cout << endl;

	/*===================================================================*/

	// *pArr - хранит адрес массива arr
	// Новый указатель на массив с тем же адресом (адрес первого элемента массива) 
	int* pArr = arr;
	cout << "Масcив \"*pArr\":" << endl;
	for (int i = 0; i < SIZE; i++) // перебор элементов в массива по адресу указателя.
	{
		cout << "\tpArr[" << i << "] = \t" << pArr[i] << endl;
	}

	cout << endl;

	cout << "\tADDRESS arr:\t" << arr << endl;
	cout << "\tADDRESS pArr:\t" << pArr << endl;

	cout << endl;

	cout << "==================================\n";

	// СОДЕРЖИМОЕ МАССИВА
	cout << "Масcив \"*pArr:\"" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\tpArr: " << (pArr + i) << "\t" << *(pArr + i) << endl;	// арифметика указателей *(pArr+i) - переход к след. адресу массива
	}

	cout << "==================================\n";

	// АДРЕСА И СОДЕРЖИМОЕ МАССИВА
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\tarr: " << arr + i << ":\t" << *(arr + i) << endl;
	}

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
