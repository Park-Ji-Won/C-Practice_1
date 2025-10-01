#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << "," << name << endl;
	}
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::~Person() {
	if (name) {
		delete[] name;
	}
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) {
		delete[] this->name;
		this->name = new char[strlen(name) + 1];
	}
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace_Lee");
	cout << "daaughter 이름을 Grace__Lee로 변경한 후 -----" << endl;
	father.show();
	daughter.show();

	return 0;
}