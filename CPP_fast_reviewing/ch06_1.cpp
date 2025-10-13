#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[]) {
	int x = sizeof(a) / sizeof(a[0]);
	int res = a[0];
	for (int i = 1; i < x; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[] = { 1,9,-2,8,6 };
	cout << "big(2, 3) " << big(2, 3) << endl;
	cout << "array[] : " << big(array) << endl;
}