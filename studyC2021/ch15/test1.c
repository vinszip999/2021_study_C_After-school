#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 8�� ȭ����
// �ۼ��� : ������
// 436p Ȯ�ι��� 1��
int main(void)
{
	double grade = 4.5;
	double* pg = &grade;
	double** ppg = &pg;

	printf("%.11f/n", **ppg); // 4.5
	printf("%u\n", &ppg); // 300����
	printf("%u\n", *&pg); // 100����
	printf("%u\n", *ppg); // 100����
	printf("%u\n", &*ppg); // 200����

	return 0;
}