#include <iostream>
using namespace std;

char c = 'a';
char& r() {
	return c;
}
char* p() {
	return &c;
}

int main() {
	cout << "c 값 : " << c << endl;
	
	r() = 'C';
	cout << "r() = 'C' 수행 후 c 값 : " << c << ", r() 값 : " << r() << endl;

	char* s = p();
	cout << "char* s = p() 수행 후 c 값 : " << c << ", r() 값 : " << r() << ", s 값 : " << *s << endl;

	*s = 'B';
	cout << "*s = 'B' 수행 후 c 값 : " << c << ", r() 값 : " << r() << ", s 값 : " << *s << endl;
}