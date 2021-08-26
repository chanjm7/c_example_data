#include <stdio.h>

int main(void)
{
	char str[50];
	char reverseStr[50];
	int strLen=0, reverseLen=0;
	int i, idx;


	printf("단어 입력: ");
	scanf("%s", str);

	while(str[strLen]!='\0')
		strLen++;
	printf("길이: %d \n", strLen);
	
	idx=strLen;
	reverseStr[strLen]='\0';
	for(i=0; i<strLen; i++)
	{
		reverseStr[i]=str[idx-1];
		idx--;
	}
	
	while(reverseStr[reverseLen]!='\0')
		reverseLen++;
	printf("길이: %d \n", reverseLen);
	
	printf("%s \n", reverseStr);
	return 0;
}
