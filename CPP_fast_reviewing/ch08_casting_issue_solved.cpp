#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}
	void show() {
		cout << "Point : " << x << ", " << y << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int a = 0, int b = 0, string c = "BLACK") :
		Point(a, b), color(c) {
	}
	void setColor(string c) {
		color = c;
	}
	void show() {
		cout << color << "Point : " << x << ", " << y << endl;
	}
};

int main() {
	Point p(1, 2);
	//Point* pBase = &p;
	ColorPoint cp(3, 4);
	Point* pBase = &cp; // 업 캐스팅
	// 잘못된 다운 캐스팅
	ColorPoint* pDer = (ColorPoint*)pBase;
	cout << "다운 캐스팅 강제 수행 후" << endl;
	pDer->setColor("YELLOW");
	pDer->show();
}