#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) {
		this->a = a;
	}
public:
	void inputA(int a) {
		setA(a);
	}
	void showA() {
		cout << "a : " << a << endl;
	}
};

class Derived : public Base {
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void inputB(int b) {
		setB(b);
	}
	void showB() {
		cout << "b : " << b << endl;
	}
};

int main() {
	Derived x;
	x.inputA(10);
	x.inputA(20);
	x.showA();
	x.inputB(30);
	x.inputB(40);
	x.showB();
}