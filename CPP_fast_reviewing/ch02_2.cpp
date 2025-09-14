#include <iostream>

double area(int r);

double area(int r) {
	return 3.14 * r * r;
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;//true는1로 출력
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "면적은 " << area(n);
}