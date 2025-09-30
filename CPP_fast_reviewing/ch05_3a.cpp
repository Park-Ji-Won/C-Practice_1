#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn"
		<< '\t' << "p 주소		" << "p의 값" << '\t' << "n의 주소" << endl;
	int i = 1;
	int n = 2;
	cout << i << '\t' << n << endl;

	int& refn = n;
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn;
	cout << i << '\t' << n << '\t' << refn << '\t' << p << '\t' << *p << '\t' << &n << endl;

	*p = 20;
	cout << i << '\t' << n << '\t' << refn << '\t' << p << '\t' << *p << '\t' << &n << endl;
}