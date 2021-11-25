#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char s1[100];
	char h;
	int i;
	int count = 1;

	strcpy(s1, "abbcccdddd");
	h = s1[0];

	for (i = 1; i <= strlen(s1); i++) {
		if (h == s1[i]) {
			count++;
		}
		else {
			printf("%c%d", h, count);
			h = s1[i];
			count = 1;
		}
	}

	return 0;
}