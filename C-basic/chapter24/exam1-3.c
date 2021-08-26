#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "rt");
	char str[50];

	if(fp==NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	while(1)
	{
		fgets(str, sizeof(str), fp);
		fputs(str, stdout);
		if(feof(fp))
			break;
	}
	fclose(fp);
	return 0;
}
