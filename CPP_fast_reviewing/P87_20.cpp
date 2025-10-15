#include <iostream>
using namespace std;
int main() {
	for (int n = 0; n < 4; n++) {
		for (int j = 0; j <= n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}