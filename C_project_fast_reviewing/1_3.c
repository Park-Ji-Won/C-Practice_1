#include <stdio.h>

struct Student {
	char name[50];
	int score;
};

int main() {
	struct Student Student[10] = {
		{"Kim",90},
		{"Jim",70},
		{"Yujin",50},
		{"Pim",70},
		{"Hank",20},
		{"Bill",80},
		{"Goods",50},
		{"Billy",89},
		{"Tommy",69},
		{"John",30},
	};

	for (int i = 0; i < 10; i++) {
		printf("이름: %s, 점수: %d\n", Student[i].name, Student[i].score);
	}

	return 0;
}