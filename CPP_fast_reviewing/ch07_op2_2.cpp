#include <iostream>
using namespace std;
class Color {
private:
	int red, green, blue;
public:
	Color(int r = 0, int g = 0, int b = 0) :red(r), green(g), blue(b) {}
	Color operator+ (Color& op2) {
		return Color(red + op2.red,
			green + op2.green,
			blue + op2.blue);
	}
	bool operator ==(Color op2) {
		return(red == op2.red &&
			green == op2.green &&
			blue == op2.blue);
	}
	void show() {
		cout << "(" << red << ", " << green << ", " << blue << ")" << endl;
	}
};
int main() {
	Color c1(100, 150, 200);
	Color c2(50, 100, 55);
	Color c3 = c1 + c2;
	Color c4(150, 250, 255);
	cout << "c1 + c2 = ";
	c3.show();
	if (c3 == c4)
		cout << "c3 and c4 are equal" << endl;
	else
		cout << "c3 and c4 are NOT equal" << endl;
}