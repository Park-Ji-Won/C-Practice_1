#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	int id;
	string name;
	int price;
	int stock;
public:
	Product() {
		id = 0;
		name = "";
		price = 0;
		stock = 0;
	}
	Product(int id, string name, int price, int stock) {
		this->id = id;
		this->name = name;
		this->price = price;
		this->stock = stock;
	}
	void displayinfo() {
		cout << "-----------------" << endl;
		cout << "상품코드: " << id << endl;
		cout << "상품명: " << name << endl;
		cout << "가격: " << price << endl;
		cout << "재고: " << stock << endl;
		cout << "-----------------" << endl;
	}
};

int main() {
	Product E1(1, "노트북", 1500000, 10);
	Product	E2(2, "마우스", 30000, 500);
	Product E3(3, "키보드", 80000, 200);

	cout << "=== 상품 목록 ====" << endl;
	E1.displayinfo();
	E2.displayinfo();
	E3.displayinfo();
}