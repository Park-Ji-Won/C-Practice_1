﻿#include <iostream>
using namespace std;

#include "ch03_14_1_circle.h"

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 ";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 ";
	cout << area << endl;
}
//76