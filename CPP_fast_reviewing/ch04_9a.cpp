#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle* pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << "pArray : " << i << " " << pArray[i].getArea() << endl;
	}
	Circle* p = pArray;
	cout << "pArray 주소 : " << pArray << endl;
	cout << "Circle 클래스 크기 : " << sizeof(Circle) << endl;
	cout << "p pointer 주소 : " << p << endl;

	for (int i = 0; i < 3; i++) {
		cout << "p pointer " << p->getArea() << endl;
		p++;
		cout << "p++ 이후 pointer 주소 : " << p << endl;
	}
	delete[] pArray;
}