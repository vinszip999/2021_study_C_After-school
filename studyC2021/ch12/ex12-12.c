#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 5월 13일 화요일
// 작성자 : 이유빈
// 344p 예제 12-12 strcmp, strncmp 함수를 사용한 문자열 비교

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0) {
		printf("%s\n", str1);
	}
	else {
		printf("%s\n", str2);
	}

	printf("앞에서 3개의 문자만 비교하면?\n");
	if (strncmp(str1, str2, 3) == 0) {
		printf("같다\n");
	}
	else {
		printf("다르다\n");
	}

	return 0;
}