#include <stdio.h>

int main(void)
{
	FILE* fp;

	fp = fopen("C:\studyC2021\a.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}
	printf("������ ���Ƚ��ϴ�.\n");
	fclose(fp);

	return 0;
}