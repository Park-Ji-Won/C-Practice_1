#include <iostream>
using namespace std;

class Shape {
protected:
	virtual void draw() {
		cout << "Shape::draw() called" << endl;
	}
public:
	void paint() {
		draw();
	}
};

class Circle :public Shape {
protected:
	virtual void draw() {
		cout << "Circle::draw() called" << endl;
	}
};

class Rect :public Shape {
protected:
	virtual void draw() {
		cout << "Rect::draw() called" << endl;
	}
};

class Line :public Shape {
protected:
	virtual void draw() {
		cout << "Line::draw() called" << endl;
	}
};

void paint(Shape* p) {
	p->paint();
}
int main() {
	paint(new Circle());
	paint(new Rect());
	paint(new Line());
	paint(new Shape());
}