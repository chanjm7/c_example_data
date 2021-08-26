#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	char n;
	int i, total=0;

	printf("문자열 입력: ");
	scanf("%s", str);

	for(i=0; i<strlen(str); i++)
	{
		if(47<str[i]&&str[i]<58)
		{
			n=str[i];
			total+=atoi(&n);
		}
	}
	printf("total: %d \n", total);
	return 0;
}
