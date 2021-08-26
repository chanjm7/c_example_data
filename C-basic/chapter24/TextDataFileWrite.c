#include <stdio.h>

int main(void)
{
	FILE * fp=fopen("simple.txt", "wt");

	if(fp==NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	fputc('A', fp);
	fputc('A', fp);
	fputs("Fucking \n", fp);
	fputs("hello\n ", fp);
	fclose(fp);
	return 0;
}
