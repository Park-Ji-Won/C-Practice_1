#include <iostream>
using namespace std;

#include "ch03_15_2_Calculator.h"
#include "ch03_15_2_Adder.h"

void Calculator::run() {
	cout << "두개의 수를 입력하세요 >>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}