#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(); //기본 생성자
	Circle(int r); //일반 생성자
	double getArea();
};

Circle::Circle():Circle(1){} //위임 생성자

Circle::Circle(int r) { //타겟생성자
	radius = r;
	cout << "반지름 " << radius << "원 생성 " << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle* pd;//객체에 대한 포인터 선언
	pd = &donut;//포인터에 객체 주소 저장
	double area = pd->getArea();//멤버함수호출
	cout << "dount의 면적은 " << area << endl;
	cout << "dount의 면적은 (*pd) " << (*pd).getArea() << endl;

	Circle pizza(30);
	Circle* pp;
	pp = &pizza;
	area = pp->getArea();
	cout << "pizza의 면적은 " << area << endl;
	cout << "pizza의 면적은 (*pp) " << (*pp).getArea() << endl;
}