#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 10�� �����
// �ۼ��� : ������
// 493p 17-6 ����ü �������� ���
struct score
{
	int kor;
	int eng;
	int math;
};
int main(void)
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("���� : %d\n", (*ps).kor);
	printf("���� : %d\n", ps->eng);
	printf("���� : %d\n", ps->math);

	return 0;
}