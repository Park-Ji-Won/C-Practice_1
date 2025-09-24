#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	string year = "2024";
	int n = stoi(year) + 10;
	cout << "n : " << n << endl;

	string a = "hello";
	cout << "a : " << a << endl;
	for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
	}
	cout << "toupper(a[i]) : " << a << endl;
	if (isdigit(a[0]))cout << "숫자" << isdigit(a[0]) << endl;
	else if (isalpha(a.at(0)))cout << "문자 : " << isalpha(a.at(0)) << endl;

	string b("I love");
	cout << b.append(" Jane").append(" and ").append("Helen.");
}