#include <iostream>
using namespace std;

int main() {
	char name[100];
	for (int i = 0; i < 3; i++) {
		cout << "이름 입력 : ";
		cin.getline(name, 100, '\n');
		cout << (i + 1) << "번 이름 : " << name << endl;
	}
}