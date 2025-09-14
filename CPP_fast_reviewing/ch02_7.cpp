#include <iostream>
using namespace std;

int main() {
	char name[10];
	char address[100];
	char quit;
	while (true) {
		cout << "이름 : ";
		cin >> name;
		while (getchar() != '\n');
		cout << "주소 : ";
		cin.getline(address, 100, '\n');
		cout << "이름 : " << name << endl;
		cout << "주소 : " << address<< endl;
		cout << "종료(q/Q) : ";
		cin >> quit;
		if (quit == 'q' or quit == 'Q') break;
		else cout << "계속 입력하세요";
	}
}