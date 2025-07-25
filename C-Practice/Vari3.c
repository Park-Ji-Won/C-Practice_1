#include <stdio.h>

int main()
{
	float a = 3.141592f;// float 형 함수 a 선언 = float형이라고 확실히 알리기 위해 표시 
	double b = 3.141592;// double형 함수 b 선언 = 그대로

	printf("a: %f \n", a);
	printf("b: %f \n", b);
	/*% d가 아니라% f인 것은 선언된 함수 a, b는 정수가 아니라 실수이기 때문에
	또한 %f를 변다른 선언없이 사용할 경우 값을 지정하려면 정수인 ex)1이 아니라 실수인 ex)1.0
	을 작성해야됨.
	*/
	return 0;
}