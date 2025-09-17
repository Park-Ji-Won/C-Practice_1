#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();//소멸자는 오직 하나만 존재
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << "원 생성 " << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "원 생성 " << endl;
}

Circle::~Circle() {
	cout << "반지름" << radius << "원 소멸" << endl;//소멸자 함수구현
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "dount의 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;

	return 0;
}