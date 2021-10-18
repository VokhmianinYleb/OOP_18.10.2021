#include "CMyPoint.h"
// реалізація конструкторів (методів) класу
// конструктор класу CMyPoint
CMyPoint::CMyPoint(void)
{
	x = y = 0;
}
// конструктор класу CMyPoint з двома параметрами
CMyPoint::CMyPoint(int nx, int ny)
{
	x = nx;
	y = ny;
}
// конструктор копіювання класу CMyPoint
// передається посилання на CMyPoint
CMyPoint::CMyPoint(const CMyPoint& ref_Point)
{
	// копіювання даних з одного об'єкту в інший
	x = ref_Point.x;
	y = ref_Point.y;
}
