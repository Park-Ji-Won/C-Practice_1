#include <iostream>
using namespace std;

template <typename T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 3, b = 5;
	myswap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	
	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << "c = " << c << ", d = " << d << endl;

	char e = 'e', f = 'f';
	myswap(e, f);
	cout << "e = " << e << ", f = " << f << endl;
}