/*
int a,b,c,h1; 정수형(1,0,2) 선언 최소 2byte 통상 4byte 
float d,e,f,bravo; 실수형(3.14,10.00) 선언 4byte 10진수로 6자리까지 정밀성
double g,programming; 실수형 선언 8byte
long h; 최소 4byte 시스템상 32bit 경우 4byte 64bit 경우 8byte
short i; 최소 2byte
char j,k,hello,mineral; 정수형 선언 1byte 
*/

#include <stdio.h>
int main()
{
	int a, A;

	int 1hi;//숫자가 앞에 위치할수없다.
	int hi123, h123i, h1234567;//ex

	int 한글이 좋아;//변수는 오직 알파벳,숫자 그리고 _(underscore)로 만 작성되야 한다.

	int space bar;// 변수의 이름에는 띄어쓰기를 해서는 안된다.
	int space_bar;//ex

	int enum, long, double, int;
	/*해당 이름들은 '예약어' 이미 C에서 사용되고 있는 변수선언으로 사용되고 있다.
	오류를 피하려면 해당 언어를 전부 숙지하거나 파란색으로 뜨면 '예약어'로 본다.
	*/

	//종은 변수 명명법

	int num_students, total_score;//_=> 띄어쓰기

	/*
	* 무슨 데이터를 보관하는지 확실히 알려주는 명칭
	* 되도록 영어로 즉 구지 한글로 풀어쓰지 말고 영어로 간단히 설명되도록 하는 명칭
	* 한가지 스타일로 고수
	*/

	int ThisIsSomeVariable;
	//Camel case 마치 낙타등 같이 대문자 소문자를 구분하여 글자의 높낮이 따지는 스타일

	return 0;
}

/*
* 변수는 데이터를 임시로 저장하는 곳이며 자유롭게 쓰고 지울 수 있습니다.

각 변수에는 형(type) 이 있어서 해당 형에 맞는 데이터를 보관할 수 있습니다.

변수의 형으로는 정수값을 보관하는 char, int 등이 있고, 실수값을 보관하는 float 과 double 이 있습니다. 
각각의 형들은 저장하는 데이터의 크기가 다릅니다.

int a = 10; 의 문장의 의미는 a 라는 정수형 변수를 정의한 뒤에, 해당 변수에 10 의 값을 대입한다 라는 뜻입니다.

변수의 이름을 정하기 위해서는 여러가지 규칙이 있습니다. 
이 규칙에 알맞게 변수의 이름을 정해야 되며 그렇지 않을 경우 컴파일 오류가 발생합니다.
*/