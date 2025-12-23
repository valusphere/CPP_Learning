
#include <iostream>

// 지금까지는 int만 사용해 왔지만
// int는 C++ 자료형 중 하나일 뿐이다

int main(void)
{
	// 1
	char ch = 'A';// 문자 1개

	// 2
	short s = 10;// 작은 정수
	int i = 100;// 기본 정수
	long l = 1000;// 큰 정수
	long long ll = 10000;// 아주 큰 정수

	// 3
	unsigned int ui = 50;// 음수가 없는 정수

	// 4
	float f = 1.5f;// 소수점 숫자
	double d = 3.14;// 더 정확한 소수점 숫자
	long double ld = 5.123;// 더 큰 실수

	// 5
	bool isOn = true;// 참 / 거짓 true == 1 or false == 0

	// C++에는 int 말고도 다양한 기본 자료형이 존재한다
	// 지금은 "이런 것들이 있구나" 정도만 보면 된다

	// 자료형은 이 값이 어떤 형태인지 알려주는 인식표다

	// 같은 숫자라도
	// 자료형에 따라 처리 방식이 달라진다
	return 0;
}