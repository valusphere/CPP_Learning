
#include <iostream>
#include <windows.h>

int main(void)
{
	// 정수형 연산의 예
	/*
	int a = 5;
	int b = 2;

	printf("int / int = %d\n", a / b); //결과는 2.5
	*/

	// 실수형 연산의 예
	/*
	double a = 5;
	double b = 2;

	printf("double / double = %f\n", a / b);
	*/

	/*
	SetConsoleOutputCP(CP_UTF8);

	int a = 5;
	int b = 2;

	printf("int / int -> double 저장: %f\n", (double)(a / b));
	printf("double / int 계산: %f\n", (double)a / b);
	*/

	/*
	short a = 30000;
	short b = 10000;
	short result = a + b;

	printf("short result = %d\n", result);
	// 값을 담을수 있는 범위를 넘으면 결과는 틀어지고 믿을수 없어진다. (오버플로우)
	*/

	/*
	unsigned int a = -1; // 에러는 안 나지만 값이 완전히 달라진다.
	printf("unsigned int a = %u\n", a);

	a = 0;
	a = a - 1;

	printf("a = %u\n", a);
	*/

	/*
	double a = 0.1;
	double b = 0.2;

	printf("0.1 + 0.2 = %.17f\n", a + b);
	*/

	/*
		> ✔ 정수끼리 계산하면 결과도 정수
		> ✔ 실수끼리 계산하면 소수점 유지
		> ✔ 다른 자료형을 섞으면 더 넓은 쪽으로 계산 (int = shot + int)
		> ✔ 계산이 먼저, 대입(저장) 나중에
		> ✔ 범위를 넘으면 값이 깨진다 
		> ✔ unsigned에 음수를 넣으면 큰 값이 된다
		> ✔ 실수 계산은 항상 정확하지 않다 예)0.300000000000004
	*/

	char a = 'A';
	char b = 1;

	printf("a = %c\n", a);
	printf("a + 1 (as char) = %c\n", a + 1);
	printf("a + 1 (as int)  = %d\n", a + 1);

	return 0;
}