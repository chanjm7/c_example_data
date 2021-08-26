#include <stdio.h>

int main(int argc, char * argv[])
{
	FILE * fp = fopen(argv[1], "rt");
	char str[15];
	int A_num=0, P_num=0;  
	
	while(1)
	{
		if(fscanf(fp, "%s", str) == EOF)
		{
			printf("fscanf EOF 반환 \n");
			break;
		}
		else
		{
			if(str[0]=='A')
				A_num++;
			else if(str[0]=='P')
				P_num++;
		}
	}

	printf("A로 시작하는 단어의 수: %d \n", A_num);
	printf("P로 시작하는 단어의 수: %d \n", P_num);

	fclose(fp);
	return 0;
}
