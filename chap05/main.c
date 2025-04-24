#include <stdio.h>

//전방선언
void f1(void);
int f3(int a, int b);

int main()
{
	int x = 3;
	f1();
	int result = f3(2,3);


	return 1;
}

int assignment0501(void)
{

}

void f1(void)
{
	// Hello 출력
	printf("안녕! 나는 네 할아버지야\n");

	return;
}

/*
	함수명: int f3(int a, int b)
	기능: 입력된 두 수 a, b를 더해서 반환
	입력: a, b는 정수
	반환: 정수
*/
int f3(int a, int b)
{
	int result = 0;

	// 두 수를 더해서 반환
	result = a + b;

	return result;
}