﻿//******************************************************************************************************
// C++ для начинающих | 
// -----------------------------------------------------------------------------------------------------
// Функции и стек. Стек алгоритм. Стек что это. Стек рекурсии. Стек c++. Стек рекурсивных вызовов #42
// Рекурсия что это. Рекурсия программирование. Рекурсия и цикл. Рекурсия с++. Для начинающих. Урок #43
// Рекурсия. Факториал числа c++ рекурсивно. Рекурсия факториал. Рекурсивный алгоритм факториал. #44
// -----------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//******************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;


// --- СТЕК и РЕКУРСИЯ ---
int Foo(int a)
{
	if (a < 1) return 0;	// если конец рекурсии - выйти с нулём 
	a--;					// уменьшить счётчик рекурсии

	cout << "\tfoo (recursion test): a = " << a << endl;

	return Foo(a);
}

/*---------------------------------------------------------------
* Рекурсия. Факторил.
* Факториал натурального числа N определяется как произведение
* всех натуральных чисел от 1 до N включительно
* N! = N * (N-1)!
* 1! = 1
* 0! = 0
* 2! = 2 * (2-1)!
* 5! = 1 * 2 * 3 * 4 * 5 = 120:
* (5-1)! -> 4!
* (4-1)! -> 3!
* (3-1)! -> 2!
* (2-1)! -> 1!
*---------------------------------------------------------------*/

int Fact(int N)
{
	// выход из рекурсии
	if (N == 0) return 0;
	if (N == 1) return 1;

	// рекурсия - факториал!
	return N * Fact(N - 1);
}


int main()
{
	setlocale(LC_ALL, "ru");

	puts("-------------------------------");
	cout << "  Р е к у р с и я \"ФАКТОРИАЛ\" " << endl;
	puts("-------------------------------\n");

	// функция с рекурсией
	// повторить 5 раз рекурсию
	Foo(5);
	cout << endl;

	// Факториал
	int Num;
	cout << "\tФАКТОРИАЛ (!): ";
	cin >> Num;
	cout << " Result: " << Fact(Num) << endl << endl;


	//=== END ===
	MyDate();
	cout << endl;
	system("pause");
	return 0;
}
