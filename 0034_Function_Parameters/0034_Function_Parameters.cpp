﻿//********************************************************************************************************************
// Передача параметров в функцию по значению. 
// Параметры функции. Передача аргументов в функцию.| C++ для начинающих | Урок #34
// -------------------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//********************************************************************************************************************

#include <iostream>

using namespace std;

/* функции передача прарметров (аргументов) */

double sum(double a, double b, double c)
{
	return a + b + c;
}


int main()
{
	setlocale(LC_ALL, "ru");

	cout << "\tSUM = " << sum(2.55, 7.67, 23.81) << endl;

	//=== END ===
	cout << endl;
	system("pause");
	return 0;
}