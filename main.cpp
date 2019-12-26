#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  b, c, d;

	cout << "Какая операция?" << endl;
	cout << "1: сложение" << endl << "2: вычитание" << endl;
	cout << "3: умножение" << endl << "4:деление" << endl;
	cin >> b;
	cout << endl;

	switch (b)
	{
	case 1:
		cout << "Функция в доработке" << endl;

	case 2:
		cout << "Функция в доработке" << endl;
	case 3:
		cout << "Функция в доработке" << endl;
	case 4:
		cout << "Функция в доработке" << endl;

	}
	system("pause");
	return 0;
}
