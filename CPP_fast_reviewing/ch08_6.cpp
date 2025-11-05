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

class Derived : private Base {
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void showb() {
		setA(5); // 1
		showA(); // 2
		cout << b;
	}
};

class GrandDerived : private Derived {
	int c;
protected:
	void setAB(int x) {
		setA(x); // 3
		showA(); // 4
		setB(x); // 5
	}
};

// 컴파일 오류 3,4
// Derived는 Base를 private로 상속받아, Derived
//클래스 내의 private 멤버가 되고, 동일 클래스
//내에서 setA(), showA()에 접근 가능함
//단, 이것을 다시 private로 상속받은 GrandDerived
//에서는 접근이 불가능함
