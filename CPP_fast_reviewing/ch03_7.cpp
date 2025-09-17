#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;

	Rectangle();	//생성자
	Rectangle(int w, int h); //
	Rectangle(int length); //

	bool isSquare(); // width와 height가 동일 하다면 True 반환 else false 반환
};

Rectangle::Rectangle() {
	width = height = 1;//기본생성자
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle::isSquare() { // if 정사각형일 경우 ture를 return
	if (width == height)return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사작형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사작형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사작형이다." << endl;
}