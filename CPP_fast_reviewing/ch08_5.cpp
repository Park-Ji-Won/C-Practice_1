#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) {
		this->a = a;
	}
public:
	void showA() {
		cout << a;
	}
};

class Derived : protected Base {
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void showB() {
		cout << b;
	}
};

int main() {
	Derived x;
	x.a = 5; // 1 Base 클래스의 private 멤버로 접근 불가 
	x.setA(10);  // 2
	x.showA();  // 2 3 Base 클래스의 protected, public 이지만, protected	상속되어 Derived 클래스 외부(main)에서 접근 불가
	x.b = 10;  // 4 x.b에서 b가 private이므로 외부 함수 main 접근 불가
	x.setB(10);  // 5 x.setB(10) protected이므로 외부 함수 main 접근 불가
	x.showB();  // 6
}