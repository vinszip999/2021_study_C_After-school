#include <stdio.h>
// 2021년 9월 7일 화요일
// 작성자 : 이유빈
//  295p 예제 11-1 대문자를 소문자로 변경
int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n'); // %d
	printf("소문자 : %c", small);

	return 0;

}