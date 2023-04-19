#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class String_S
{
private:
	string str;
	int lenght_str;
public:
	String_S() : str{" "}, lenght_str{0} {}
	String_S(string str_s) : str{ str_s }{
		lenght_str = str.length();
	}
	String_S(string str_s, int size_s) : str{str_s}, lenght_str{size_s}{}
	void printS();
	void operator[] (int index) {
		if (index >= 0 && index < lenght_str) {
			cout << "По индексу " << index << " находится символ ";
			cout << str.substr(index, 1) << endl;
		}
	}
	int operator() (char s) {
		return str.find_first_of(s)>=0 ? str.find_first_of(s) : -1;
	}
	operator int() {
		return lenght_str;
	}

	String_S& operator++() {
		str.push_back('!');  //вместо пробела вставляем ! - так нагляднее видно, что строка увеличилась на 1 символ
		return *this;
	}

	String_S& operator--() {
		str.erase(lenght_str, 1); //удаляем 1 символ с конца строки
		return *this;
	}

	friend ostream& operator<< (ostream& os, const String_S& st) { //выводим str в поток вывода
		return os << st.str;
	}
};

