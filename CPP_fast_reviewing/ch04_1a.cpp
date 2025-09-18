#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;

	cout << donut.getArea() << endl;//객체 이름으로 멤버접근

	// 객체 포인터로 멤버접근
	Circle* pd;
	pd = &donut;
	cout << pd->getArea() << endl;
	cout << (*pd).getArea() << endl;

	Circle pizza(30);

	Circle* pp;
	pp = &pizza;
	cout << pp->getArea() << endl;
	cout << (*pp).getArea() << endl;
}