#include <stdio.h>

int main(int argc, char * argv[])
{
	FILE * fp = fopen(argv[1], "rt");
	char ch;
	int n = 0;	
	long pos;
	while(n<20)
	{
		if(feof(fp) != 0 )
		{
			printf("feof파일 끝 도달 \n");
			break;
		}
		else
		{
			pos = ftell(fp);
			printf("fgetc 전 : %ld \n", pos);
			ch = fgetc(fp);
			pos = ftell(fp);
			printf("fgetc 후 : %ld \n", pos);
			if(ch == EOF)
				printf("fgetc EOF 반환 \n");
			printf("%d \n", ch);
		}
		n++;
	}

	fclose(fp);
	return 0;
}
