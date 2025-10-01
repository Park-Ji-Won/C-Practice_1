#include <iostream>
using namespace std;

int main() {
	char c = 'a';
	cout << "C: " << c << endl;

	char* p = &c;
	cout << "*p = &c 이후 c : " << c << ", *p : " << *p << " , p주소 / c주소 : " << static_cast<void*>(p) << endl;

	char& s = c;
	cout << "&s = c 이후 c : " << c << ", *p : " << *p << " , p주소 / c주소 : " << static_cast<void*>(p)
		<< " , 참조 s : " << s << endl;

	*p = 'b';
	cout << "*p = 'b' 이후 c : " << c << ", *p : " << *p << " , p주소 / c주소 : " << static_cast<void*>(p)
		<< " , 참조 s : " << s << endl;

	s = 'c';
	cout << "s = 'c' 이후 c : " << c << ", *p : " << *p << " , p주소 / c주소 : " << static_cast<void*>(p)
		<< " , 참조 s : " << s << endl;
}