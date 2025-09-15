#include <iostream>
using namespace std;

class MyClass {
	int someData;
public:
	MyClass() {
		cout << "기본생성자 호출" << endl;
		someData = 1;
	}
	MyClass(int i) {
		cout << "일반 생성자 호출" << endl;
		someData = i;
	}
	void printData() {
		cout << "멤버 함수 호출 : " << someData << endl;
	}
};

int main() {
	MyClass myC;
	MyClass myC1(33);
	myC.printData();
	myC1.printData();
}