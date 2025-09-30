#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int tmp;
	cout << "\ntmp 이전 값 a: " << *a << " b: " << *b << endl;
	cout << "tmp 이전 주소 a: " << &a << " b: " << &b << endl;
	tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "tmp 이후 값 a: " << *a << " b: " << *b << endl;
	cout << "tmp 이후 주소 a: " << &a << " b: " << &b << endl;
}

int main() {
	int m = 2, n = 9;
	cout << "함수 이전 값 m: " << m << " n: " << n << endl;
	cout << "함수 이전 주소 m: " << &m << " n: " << &n << endl;
	swap(&m, &n);
	cout << "\n함수 이후 값 m: " << m << " n: " << n << endl;
	cout << "함수 이후 주소 m: " << &m << " n: " << &n << endl;
}