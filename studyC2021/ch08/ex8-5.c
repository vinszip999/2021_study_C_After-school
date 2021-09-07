#include <stdio.h>
#include <string.h>
// 2021년 4월 6일 화요일 
// 작성자 : 이유빈
// 문자열을 대입하는 strcpy 함수

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	//str1 = "tiger"
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}
