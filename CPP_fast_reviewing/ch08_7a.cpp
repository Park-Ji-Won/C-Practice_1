#include <iostream>
using namespace std;

class MP3 {
public:
	void play();
	void stop();
};

void MP3::play() {
	cout << "MP3 play()" << endl;
}

void MP3::stop() {
	cout << "MP3 stop()" << endl;
}

class MobilePhone {
public:
	bool sendCall();
	bool receiveCall();
	bool sendSMS();
	bool receiveSMS();
};

bool MobilePhone::sendCall() {
	return true;
}
bool MobilePhone::receiveCall() {
	return true;
}
bool MobilePhone::sendSMS() {
	return false;
}
bool MobilePhone::receiveSMS() {
	return false;
}

class MusicPhone : public MP3, public MobilePhone {
public:
	void dial();
};

void MusicPhone::dial() {
	play();
	sendCall();
	cout << "MusicPhone::dial()" << endl;
}

int main() {
	MusicPhone hanPhone;
	hanPhone.play();
	cout << "hanPhone.sned : " << hanPhone.sendSMS();
}