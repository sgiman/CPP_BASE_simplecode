﻿//********************************************************************************************************
// Прототипы функций. Прототип функции что это. Прототип функции пример. | C++ для начинающих | Урок #36
// -------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//********************************************************************************************************

#include <iostream>

using namespace std;

/* прототипы функций */

int foo(int a, int b);			// прототип функции (педрварительное объявление)
void foo2();


// *** main ***
int main()
{
	setlocale(LC_ALL, "ru");

	int res = foo(1, 2);
	cout << "\n MAIN: RES = " << res << endl;

	//=== END ===
	cout << endl;
	system("pause");
	return 0;
}

// --- foo ---
int foo(int a, int b)
{
	int result = a + b;
	cout << "\n\t\"foo\": Я фукция, меня вызвали!" << endl;
	cout << "\tRESULT = " << result << endl;
	foo2();
	return result;
}

// --- foo2 ---
void foo2()
{
	cout << "\n\t\"foo2\": Я фукция, меня вызвали!" << endl;
}

