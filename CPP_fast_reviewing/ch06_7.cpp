#include <iostream>
using namespace std;

float square(float a) {
	cout << "float : " << endl;
	return a * a;	
}

double square(double a) {
	cout << "double : " << endl;
	return a * a;
}

int main() {
	cout << square(3, 0);
	cout << square(3);
}