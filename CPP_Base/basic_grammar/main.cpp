#include <iostream>
int main(void)
{
	//printf("hello world !!!\n");
	// 출력 형식을 먼저 정해놓고 그 형식에 맞게 값을 끼워 넣는 함수다.		

	// 1. 코드가 제대로 실행되는지 확인할 때
		// 어디까지 정상?
		// 어느 과정에서 문제가 생긴걸까?
		// 정상적으로 지나온 과정과 문제가 생긴 지점		
		
		// 여기까지는 정상입니다.
		// 이 지점은 통과했습니다.
		/*
		int score = 10;
		printf("시동이 걸렸습니다\n");

		printf("score에 10 대입이 이루어졌다\n");

		// 여기서 문제가 발생
		int result = score / 0;

		printf("이 문장은 실행되지 않습니다\n");
		*/
	// 2. 변수 안에 뭐가 들어있는지 보고 싶을 때
	/*
		int potion = 2;
		printf("현재 포션 개수: %d\n", potion);

		// 전투 후 포션을 주웠다
		potion = potion + 3;
		printf("포션 3개 획득! 현재 포션 개수: %d\n", potion);

		// 전투 중 포션을 사용했다
		potion = potion - 1;
		printf("포션 1개 사용! 현재 포션 개수: %d\n", potion);

		// 상점에서 포션을 추가로 구매했다
		potion = potion + 5;
		printf("포션 5개 구매! 현재 포션 개수: %d\n", potion);
	*/
	
	// 3. 내가 생각한 흐름대로 프로그램이 움직이는지 볼 때	
		int traffic = 80;

		// 상황에 따라 실행 흐름이 달라진다
		if (traffic > 60) // 프로그램이 어떤 경로를 지나왔는지
		{
			printf("교통이 혼잡합니다. 다른 길로 이동합니다.\n");
		}

		printf("계속 목적지를 향해 이동합니다.\n");		
	return 0;
}