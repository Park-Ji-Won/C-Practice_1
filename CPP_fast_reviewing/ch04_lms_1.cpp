#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle(){}
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle() {
	radius = 1;
}

int main() {
	int n;

	cout << "생성하고자 하는 원의 개수: ";
	cin >> n;

	if (n < 0) {
		cout << "프로그램 종료" << endl;
		return 0;
	}
}