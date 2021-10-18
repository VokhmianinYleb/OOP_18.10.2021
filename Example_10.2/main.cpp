#include <iostream>
#include <cmath>
#include "CMyPoint.h"
using namespace std;

double GetLength(CMyPoint mp);

int main() {
	CMyPoint p1(5, 5); // оголосити екземпляр класу CMyPoint
	double len;
	// передача точки p1 у функцію, викликається конструктор копіювання, len = 7,07...
	len = GetLength(p1);
	cout << len << endl;
	system("pause");
}

double GetLength(CMyPoint mp)
{
	double length;
	int tx, ty;
	tx = mp.GetX();
	ty = mp.GetY();
	length = sqrt(tx * tx + ty * ty);
	return length;
}
