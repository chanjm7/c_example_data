#include <stdio.h>

int main(void)
{
	char str[50];
	int len=0, i;
	char temp;

	printf("단어 입력: ");
	scanf("%s", str);

	while(str[len]!='\0')
		len++;
	
	for(i=0; i<len/2; i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}

	for(i=0; i<len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
