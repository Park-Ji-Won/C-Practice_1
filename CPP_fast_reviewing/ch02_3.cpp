#include <iostream>
using namespace std;

namespace A {
	void printAll() {
		cout << "A의 printAll함수" << endl;
	}
}

namespace B {
	void printAll() {
		cout << "B의 printAll함수" << endl;
	}
}

namespace C {
	void printAll() {
		cout << "C의 PrintAll함수" << endl;
	}
}

int main() {
	A::printAll();
	B::printAll();
	C::printAll();
}