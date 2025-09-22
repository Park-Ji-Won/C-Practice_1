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
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};
int main() {
	Circle circleArray[3];
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "배열의 이름" << i << "의 " << (circleArray + i)->getArea() << endl;

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++)
		cout << "포인터 p " << i << "의 " << (p + i)->getArea() << endl;

	Circle* pa = circleArray;
	for (int i = 0; i < 3; i++)
		cout << "*p++ " << (*p++).getArea() << endl;
}