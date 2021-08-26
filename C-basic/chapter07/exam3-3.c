#include <stdio.h>

int main(void)
{
	int cur=2, is=1;

	do
	{
		do
		{
			printf("%d X %d = %d \n", cur, is, cur*is);
			is++;
		}while(is<10);	
		cur++;
		is=1;
	}while(cur<10);
}
