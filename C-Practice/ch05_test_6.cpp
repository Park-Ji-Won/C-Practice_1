#include <iostream>
using namespace std;

char c = 'a';

char& find() { //char 타입의 참조 리턴
	return c; //변수 c에 대한 참조 리턴
}

int main() {
	char a = find(); //a = 'a'가 됨
	cout << "a " << a << endl; 

	char& ref = find(); //ref는 c에 대한 참조
	cout << "ref " << ref << endl;
	ref = 'M'; //c='M'
	cout << "M 할당 후 c " << c << " ,find(): " << find() << ", ref: " << ref << endl;

	find() = 'b'; //c='b"
	cout << "b 할당 후 c " << c << ", find(): " << find() << ", ref: " << ref << endl;
}