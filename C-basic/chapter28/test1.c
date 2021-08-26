#include <stdio.h>

int main(int argc, char * argv[])
{
	FILE * fp = fopen(argv[1], "rt");
	char ch;
	int n = 0;	
	while(n<20)
	{
		if(feof(fp) != 0 )
		{
			printf("feof파일 끝 도달 \n");
			break;
		}
		else
		{
			ch = fgetc(fp);
			if(ch == EOF)
				printf("fgetc EOF 반환 \n");
			printf("%d \n", ch);
		}
		n++;
	}

	fclose(fp);
	return 0;
}
