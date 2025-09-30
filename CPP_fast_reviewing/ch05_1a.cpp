#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
	int getRadius();
	void setRadius(int radius);
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius =	" << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int Circle::getRadius() {
	return radius;
}

void Circle::setRadius(int radius) {
	this->radius = radius;
}

void increase(Circle *p) {
	int r = p->getRadius();
	p->setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(&waffle);
	cout << "after increase() radius " << waffle.getRadius() << endl;
}