#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "wt");
	char str[50];

	fputs("#이름: 이찬민\n", fp);
	fputs("#주민번호: 8493021849321\n", fp);
	fputs("#전화번호: 0101231232131\n", fp);

	fclose(fp);
	return 0;
}
