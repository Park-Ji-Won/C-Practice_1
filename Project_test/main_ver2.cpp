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
	void setProduct(int id, string name, int price, int stock) {
		this->id = id;
		this->name = name;
		this->price = price;
		this->stock = stock;
	}
	void displayinfo() {
		cout << "-----------" << endl;
		cout << "상품코드명: " << id << endl;
		cout << "상품명: " << name << endl;
		cout << "가격: " << price << endl;
		cout << "재고: " << stock << endl;
		cout << "-----------" << endl;
	}
	bool isEmpty() {
		return (id == 0);
	}
};

int main() {
	Product products[20];

	int count = 0;

	products[0].setProduct(1, "태블릿", 2000000, 30);
	count++;
	products[1].setProduct(2, "블루투스 마우스", 30000, 500);
	count++;
	products[2].setProduct(3, "무선 헤드폰", 500000, 50);
	count++;
	products[3].setProduct(4, "노트북", 3000000, 10);
	count++;
	products[4].setProduct(5, "소형 키보드", 10000, 500);
	count++;
	products[5].setProduct(6, "노트북 키캡", 1000, 5000);
	count++;

	cout << "=== 등록된 현 상품 목록 ===\n" << endl;
	cout << "총 " << count << "개의 상품\n" << endl;

	for (int i = 0; i < count; i++) {
		cout << "[제품 " << (i + 1) << "]" << endl;
		products[i].displayinfo();
		cout << endl;
	}
}