#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	char sym;
	int b;
	int endp;
	cout << "Multicalc by zvizergms." << endl << endl;
	cout << "Возможные действия:" << endl;
	cout << "Сложение +" << endl;
	cout << "Вычитание -" << endl;
	cout << "Умножение *" << endl;
	cout << "Деление без остатка /" << endl;
	cout << "Деление с остатком %" << endl;
	cout << "Квадратный корень V" << endl;
	cout << "Степень S" << endl;
	cout << endl;
	cout << "Введите первое число:" << endl;
	cin >> a;
	cout << "Введите знак действия:" << endl;
	cin >> sym;
	if (sym == 'V') {
		cout << "Результат: " << endl;
		cout << sqrt(a) << endl;
	}
	else {
		cout << "Введите второе число:" << endl;
		cin >> b;
		cout << "Результат:" << endl;
		if (sym == '+') {
			cout << a + b << endl;
		}
		if (sym == '-') {
			cout << a - b << endl;
		}
		if (sym == '*') {
			cout << a * b << endl;
		}
		if (sym == '/') {
			cout << a / b << endl;
		}
		if (sym == '%') {
			cout << a % b << endl;
		}
		if (sym == 'S') {
			cout << pow(a, b) << endl;
		}
	}
	cout << "Спасибо за пользование калькулятором Multicalc. Для выхода введите любой символ. \n";
	cin >> endp;
}
