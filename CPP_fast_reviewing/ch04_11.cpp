#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("대전시 동구 동대전로 171");
	string copyAddress(address);
	char text[] = { 'L','o','v','e',' ','C','+','+','\0' };
	string title(text);
	string* p = new string("C++");
	p->append(" Great!!");

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
	cout << *p << endl;

	delete p;
}