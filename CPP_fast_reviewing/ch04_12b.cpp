#include <iostream>
#include <string>
using namespace std;

int main() {
	string e = "I love love C++";
	int index = e.find("love");
	cout << "e.fine(\"love\") : " << index << endl;
	index = e.find("love", index + 1);
	cout << "e.fine(\"love\", index + 1) : " << index << endl;
	index = e.find("C#");
	cout << "e.fine(\"C#\") : " << index << endl;
	index = e.find('+', 7);
	cout << "e.find(\'+\',7) : " << index << endl;

	string f("I love C++");
	cout << "string f : " << f << endl;
	char ch1 = f.at(7);
	cout << "f.at(7) : " << f.at(7) << endl;
	char ch2 = f[7];
	cout << "f[7] : " << f[7] << endl;
	f[7] = 'B';
	cout << "f[7] = \'B\' : " << f << endl;
	char ch3 = f.at(f.length() - 1);
	cout << "f.at(f.length() -1) : " << ch3 << endl;
}