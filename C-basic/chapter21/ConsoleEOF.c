#include <stdio.h>

int main(void)
{
	int ch;
	int n=0;

	while(1)
	{
		ch=getchar();
		putchar(ch);
		if(ch==EOF)
		{
			break;
		}
	}
	return 0;
}
