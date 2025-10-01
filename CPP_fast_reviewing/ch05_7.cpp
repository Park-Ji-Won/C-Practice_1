﻿#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius);
	void setRadius(int radius);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int radius) {
	this->radius = radius;
}

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void readRadius(Circle &d) {
	int r; //반지름 값 함수 선언
	cout << "정수 값으로 반지름을 입력하세요 >> "; 
	cin >> r; //반지름 값 입력
	d.setRadius(r); //객체 c에 반지름 설정
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;
}