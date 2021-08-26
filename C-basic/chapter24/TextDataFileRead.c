#include <stdio.h>

int main(void)
{
	char str[20];
	FILE * fp=fopen("simple.txt", "rt");
	
	if(fp==NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	
	fgets(str, sizeof(str), fp);
	puts(str);
	fclose(fp);
	return 0;
}
