#include <iostream>
using namespace std;

class Base {
public:
	void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Derived::f() called" << endl;
	}
};

void main() {
	Base b, * pBase;
	pBase = &b;
	b.f();
	pBase->f();
	Derived d, * pDer;
	pDer = &d;
	d.f();
	pDer->f();
}