#include <iostream>
#include <windows.h>


int main(void)
{	
	// 1. 암시적 형변환 - "알아서 해주는 컴퓨터"
	int smallNumber = 10;
	double bigBucket = smallNumber;
	// 2. 명시적 형변환 (1) - C스타일 (옛날 방식)
	double pi = 3.141592;
	int number1 = (int)pi;
	// 3. 명시적 형변환 (2) - static_cast (현대적 방식)
	int number2 = static_cast<int>(pi);	
	// 4. 두 방식의 차이점 - "안전과 검색"
	/*
	[정리]
	(int)pi             -> "위험해도 무조건 바꿔! (무대포)"
	static_cast<int>(pi)-> "이거 정수로 변환 가능한지 확인하고 바꿔줘 (안전제일)"
	*/

	SetConsoleOutputCP(CP_UTF8);

	printf("C스타일 결과: %d\n", number1);
	printf("static_cast 결과:  %d\n", number2);

	return 0;
}