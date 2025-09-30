#include <iostream>
using namespace std;

bool average(int a[], int size, double& avg) {
	if (size <= 0) {
		return false;
	}
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	avg = (float) sum / size;
	return true;
}

int main() {
	int x[] = { 1,2,3,4 };
	double avg;
	(average(x, 4, avg)) ? cout << " 4 평균은 :  " << avg << endl :
		cout << "매개 변수(4) 오류" << endl;

	(average(x, -2, avg)) ? cout << "평균은 " << avg << endl :
		cout << "매개 변수(-2) 오류" << endl;
}