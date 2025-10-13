#include <iostream>
using namespace std;

int abs(int a) {
	return (a > 0) ? a : -a;
}
int man(int a, int b) {
	return (a > b) ? a : b;
}
int min(int a, int b) {
	return (a > b) ? b : a;
}

int main() {
	cout << "절대값 : " << abs(-5) << endl;
	cout << "최대값 : " << max(10, 8) << endl;
	cout << "최소값 : " << min(-3, -8) << endl;
}