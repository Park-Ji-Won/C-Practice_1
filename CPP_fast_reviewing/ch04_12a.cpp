#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "kitae";
	string alias = "kito";
	int res = name.compare(alias);

	(res == 0) ? cout << "두 문자열이 같다" << endl : (res < 0) ? cout << name << "이 앞에 옴" << endl : \
		cout << alias << "앞에 옴" << endl;

	string a = "I love C++";
	cout << "a: " << a << endl;
	a.insert(2, "really");
	cout << "a.insert(2, \"really\") : " << a << endl;
	a.replace(2, 11, "study");
	cout << "a.replace(2,11,\"study\") : " << a << endl;

	cout << "a.length : " << a.length() << endl;
	cout << "a.size : " << a.size() << endl;
	cout << "a.capacity :	" << a.capacity() << endl;

	a.erase(0, 7);
	cout << "a.erase(0,7) : " << a << endl;
	a.clear();
	cout << "a.clear() : " << a << endl;

	string b = "I love C++";
	string c = b.substr(2, 4);
	string d = b.substr(2);
	cout << "b : " << b << endl << "b.substr(2,4) : " << c << endl;
	cout << "b.substr(2) : " << d << endl;
}