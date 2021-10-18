#include <iostream>
#include "CMyPoint.h"
using namespace std;

int main() {
	// демонстрація використання конструктора копіювання
	CMyPoint p1(5, 8); // створення об'єкту p1
	CMyPoint p2 = p1; // створення об'єкту p2 - конструктор копирования
	// перевірка
	cout << p2.GetX() << endl; // d = 5
	cout << p2.GetY(); // d = 8
	system("pause");
}
