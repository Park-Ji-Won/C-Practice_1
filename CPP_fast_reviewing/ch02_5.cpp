#include <iostream>
using namespace std;

int main() {
	char name[7];
	for (int i = 0; i < 3; i++) {
		cout << "이름 입력 : ";
		cin >> name;
		cout << (i + 1) << "번 이름 :" << name << endl;
	}
}