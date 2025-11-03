#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public:
	TV() {
		size = 20;
	}
	TV(int size) {
		this->size = size;
	}
	int getSize() {
		return size;
	}
};

