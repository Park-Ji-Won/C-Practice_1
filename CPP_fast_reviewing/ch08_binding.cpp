#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "Animal speaks" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "Dog barks" << endl;
	}
};

class Cat : public Animal {
public:
	void sepak() {
		cout << "Cat meows" << endl;
	}
};

void makesound(Animal* a) {
	a->speak();
}

int main() {
	Animal a;
	Dog d;
	Cat c;
	makesound(&a);
	makesound(&d);
	makesound(&c);
}