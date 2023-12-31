﻿//**********************************************************************************
// Инкремент и декремент. Постфиксный и префиксный. | C++ для начинающих | Урок #9
// ---------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//**********************************************************************************

#include <iostream>

using namespace std;

// инкремент и декремент 

int main()
{
	setlocale(LC_ALL, "Rus");

	int a = 1, b = 1;

	// ПОСТФИКСНАЯ ФОРМА: a++, a--
	cout << "\t до " << a << endl;
	cout << " postfix++: " << endl;
	cout << "\t после " << a++ << endl;
	cout << "\t финал " << a << endl << endl;

	// ПРЕФИКСНАЯ ФОРМА: ++b, --b 
	cout << "\t до " << b << endl;
	cout << " ++prefix: " << endl;
	cout << "\t после " << ++b << endl;
	cout << "\t финал " << b << endl << endl;

	a = 1;
	b = 0;
	b = ++a * a;
	cout << endl;
	cout << "\t" << b << endl;


	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}
