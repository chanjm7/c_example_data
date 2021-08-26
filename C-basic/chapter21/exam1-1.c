#include <stdio.h>

int main(void)
{
	int ch;
	
	ch=getchar();

	if(64<ch&&ch<91)
	{	
		ch+=32;
	}
	else if(96<ch&&ch<123)
	{
		ch-=32;
	}
	else
	{
		printf("영어가 아닙니다! \n");
	}
	
	putchar(ch);
	printf("\n");
	return 0;
}
