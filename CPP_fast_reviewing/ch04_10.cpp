#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int num, radius;
	
	cout << "생성하고자 하는 원의 갯수? ";
	cin >> num;
	if (num < 0) return 0;

	Circle* pArray = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < num; i++) {
		cout << pArray[i].getArea() << "\t";
		if (pArray[i].getArea() >= 100 and pArray[i].getArea() <= 200)
			count++;
	}
	cout << endl << "면적인 100에서 200 사이인 원의 개수는 " << count << endl;
	delete[] pArray;
}