#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 작성일 : 2021년 3월 18일 목요일
// 작성자 : 이유빈
// char 배열에 문자열 저장 프로그램 예제 3-6, 64쪽

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}
/*char fruit[20] = "strawberry";

printf("딸기 : %s\n", fruit);
printf("딸기쨈 : %s %s\n", fruit, "jam");

return 0;*/
