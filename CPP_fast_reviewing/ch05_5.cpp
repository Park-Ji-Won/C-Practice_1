﻿#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if (size <= 0) {
		return false;
	}
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	avg = sum / size;
	return true;
}

int main() {
	int x[] = { 1,2,3,4 };
	int avg;
	if (average(x, 4, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;
}