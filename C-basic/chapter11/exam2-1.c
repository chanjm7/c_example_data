#include <stdio.h>

int main(void)
{
	char str[50];
	int len=0;

	printf("단어 입력: ");
	scanf("%s", str);

	while(str[len]!='\0')
		len++;
	printf("%s의 길이: %d \n", str, len);

	return 0;
}
