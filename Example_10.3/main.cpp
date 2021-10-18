#include <iostream>
#include "CMyPoint.h"
using namespace std;

CMyPoint GetCenterPoint(CMyPoint mp)
{
	int tx, ty;
	tx = mp.GetX() / 2;
	ty = mp.GetY() / 2;
	// повернення з функції, конструктор копіювання не викликається
	// замість нього викликається конструктор з 2 параметрами
	return CMyPoint(tx, ty);
}
// функція, що повертає середину відрізка, заданого точками
CMyPoint GetCenterPoint2(int x, int y)
{
	CMyPoint mp(x / 2, y / 2);
	// створюється тимчасовий об'єкт, який ініціалізується значенням з mp,
	// у результаті викликається конструктор копіювання
	return mp;
	// у цьому випадку конструктор копіювання не викликається
	//return CMyPoint(x/2,y/2);
}

CMyPoint Distance(CMyPoint mp, CMyPoint mp2)
{
	int tx, ty;
	tx = (mp.GetX() + mp2.GetX()) / 2;
	ty = (mp.GetY() + mp2.GetY()) / 2;
	return CMyPoint(tx, ty);
}

int main() {
	CMyPoint mp(18, -8);
	CMyPoint mp2(5, 4);
	CMyPoint mpC;
	// викликається конструктор копіювання при передачі mp в функцію
	mpC = GetCenterPoint(mp);
	int cx, cy;
	cx = mpC.GetX(); // cx = 9
	cy = mpC.GetY(); // cy = -4
	cout << cx << " " << cy << endl;
	// викликається конструктор копіювання при поверненні з функції
	mpC = GetCenterPoint2(-9, 13);
	cx = mpC.GetX(); // cx = -4
	cy = mpC.GetY(); // cy = 6
	cout << cx << " " << cy << endl;
	//Координаты середины
	mpC = Distance(mp, mp2);
	cx = mpC.GetX();
	cy = mpC.GetY();
	cout << cx << " " << cy << endl;
	system("pause");
}
