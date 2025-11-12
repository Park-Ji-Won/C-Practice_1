#include <iostream>
using namespace std;

int n = 11;

void sendMessage(const char* msg) {
	cout << msg << endl;
}

class Window {
public:
	void sendMessage(const char* msg) {
		cout << "window msg : " << msg << endl;
	}
	void run() {
		::sendMessage("Global Hello");
		sendMessage("Local Hello");
	}
};

int main() {
	int n = 3;
	cout << "전역변수 : " << ::n << endl;
	cout << "지역변수 : " << n << endl;
	Window window;
	window.run();
}