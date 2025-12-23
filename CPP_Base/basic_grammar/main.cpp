
#include <iostream>

int main(void)
{
	// 지금까지는 int만 사용해 왔지만
	// int는 C++ 자료형 중 하나일 뿐이다
	char ch = 'A';// 문자 1개

	short s = 10;// 작은 정수
	int i = 100;// 기본 정수
	long l = 1000;// 큰 정수
	long long ll = 10000;// 아주 큰 정수

	unsigned int ui = 50;// 음수가 없는 정수

	float f = 1.5f;// 소수점 숫자
	double d = 3.14;// 더 정확한 소수점 숫자
	long double ld = 5.123;// 더 큰 실수

	bool isOn = true;// 참 / 거짓 //true = 1, false = 0,
	
	// 기본 자료형 요약
	// char          : 문자 1개
	// 정수형(short, int, long, long long)        : 소수점 없는 숫자
	// unsigned 정수 : 음수가 없는 숫자
	// 실수형        : 소수점 있는 숫자
	// bool          : 참 / 거짓

	// 값의 형태가 다르기 때문에
	// C++은 자료형을 따로 나누어 제공한다

	// C++에는 int 말고도 다양한 기본 자료형이 존재한다
	// 지금은 "이런 것들이 있구나" 정도만 보면 된다

	// 자료형은 이 값이 어떤 형태인지 알려주는 인식표다	

	// 같은 숫자라도
	// 자료형에 따라 처리 방식이 달라진다

	/*
		- 언제 쓰는지
		- 왜 필요한지
		- 잘못 쓰면 어떤 일이 생기는지
	*/

	return 0;
}