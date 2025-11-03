#include <iostream>
#include <string>
using namespace std;

class A {
public:
	A() {
		cout << "생성자 A call" << endl;
	}
	~A() {
		cout << "생성자 A recall" << endl;
	}
};

class B : public A {
public:
	B() {
		cout << "생성자 B call" << endl;
	}
	~B() {
		cout << "생성자 B recall" << endl;
	}
};

class C : public B {
public:
	C() {
		cout << "생성자 C call" << endl;
	}
	~C() {
		cout << "생성자 C recall" << endl;
	}
};

int main() {
	C c;
}