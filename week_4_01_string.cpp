﻿/*
В ранее созданный класс String добавьте перегрузку [], (),
преобразования типа к int
 ■ [] — возвращает элемент по указанному индексу;
 ■ () — ищет символ в строке, если символ есть воз-
вращает индекс, если нет -1.
Преобразование к int возвращает длину строки
Реализуйте операцию инкеремента. Она должна увели-
чивать длину строки на единицу. Новый символ запол-
няется пробелом.
Реализуйте операцию декремента. Она должна уменьшать
длину строки на единицу.
*/

#include "String_S.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "-----------Класс String-----------" << endl << endl;

	String_S str1("abcdefjfghlkfh;k");
	str1.printS();
	str1[5];  //выводим символ под индексом 5
	cout << endl;

	char s; //символ для поиска
	cout << "Введите символ для поиска: ";
	cin >> s;
	if (str1(s) >=0 ) cout << "Символ \"" << s << "\" найден под индексом " << str1(s) << endl;
	else cout << "Символа \"" << s << "\" в строке нет" << endl;
	cout << endl;

	cout << "Длина исходной строки " << int(str1) << " символов" << endl; //преобразование int
	cout << endl;

	++str1;
	cout << "Строка после добавления \"!\" в конец: " << str1 << endl << endl;

	--str1;
	cout << "Строка после удаления \"!\" : " << str1 << endl << endl;

	cout << endl;
	system("pause");
	return 0;

}

