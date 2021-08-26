#include <stdio.h>

int CheckPalindrome(char * str, int len)
{
	int i;

	for(i=0; i<len/2; i++)
	{	
		if(str[i]!=str[len-(i+1)])
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	char str[50];
	int strLen=0;

	printf("문자열 입력: ");
	scanf("%s", str);
	
	while(str[strLen]!='\0')
		strLen++;
	
	if(CheckPalindrome(str, strLen))
		printf("회문입니다. \n");
	else
		printf("회문이 아닙니다 \n");

	return 0;
	
}
