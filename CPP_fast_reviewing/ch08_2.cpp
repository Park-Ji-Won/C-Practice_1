#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y;
public:
	void set(int x, int y);
	void showPoint();
};

void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::showPoint() {
	cout << "(" << x << "," << y << ")" << endl;
}

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color);
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color) //1
		return true;
	else
		return false;
}

int main() {
	Point p;
	p.set(2, 3); // 2
	p.x = 5; //3
	p.y = 5; //4
	p.showPoint();

	ColorPoint cp;
	cp.x = 10;	//5
	cp.y = 10;	//6
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false");	//7
}

//3, 4, 5, 6 번 오류 : Point/ColorPoint 클래스와 main() 는 외부 함수로 접근 안됨
//7번은 true