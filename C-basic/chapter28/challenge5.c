#include <stdio.h>

int main(int argc, char * argv[])
{
	FILE * fp1 = fopen(argv[1], "rt");
	FILE * fp2 = fopen(argv[2], "rt");
	char ch1;
	char ch2;

	if(fp1 == NULL || fp2 == NULL)
	{
		puts("파일 가져오기 실패");
		return -1;
	}

	while(1)
	{
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);

		if(ch1 != ch2)
		{	
			printf("두 개의 파일은 일치하지 않습니다 \n");
			break;
		}

		if(ch1 == EOF && ch2 == EOF)
		{
			printf("두 개의 파일은 완전히 일치 합니다 \n");
			break;
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}
