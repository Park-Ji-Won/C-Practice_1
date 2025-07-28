#include <stdio.h>

int main() {
	//unsigned int b = -1;
	//printf("b에 들어있는 값을 unsigned int 로 해석했을 때 값: %u", b);
	unsigned int b = 4294967295;
	printf("b : %u \n", b);
	
	b++;
	printf("b : %u \n", b);

	return 0;
}

/*
* 컴퓨터 상에서 정수인 음수를 표현하기 위해서 2 의 보수 표현법을 사용합니다. 
이에 따라 int 상에서 오버플로우가 발생하였을 때 양수에서 값을 증가시켰더니 
음수로 바뀌는 기적을 볼 수 있습니다. 항상 오버플로우를 조심합시다.
*/