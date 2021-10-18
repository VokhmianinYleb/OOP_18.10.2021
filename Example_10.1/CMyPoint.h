// клас CMyPoint
class CMyPoint
{
	int x, y;
public:
	CMyPoint(void); // конструктор класу за замовчуванням
	CMyPoint(int nx, int ny); // конструктор класу з двома параметрами
	CMyPoint(const CMyPoint& ref_Point); // конструктор копіювання
	// методи доступу - реалізовані в класі
	int GetX(void) { return x; }
	int GetY(void) { return y; }
};
