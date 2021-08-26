#include <stdio.h>

int main(void)
{
	char str[50];
	int idx=0;
	char max;

	printf("단어입력: ");
	scanf("%s", str);

	max=str[idx];
	while(str[idx]!='\0')
	{
		if(str[idx]>max)
			max=str[idx];
		idx++;
	}
	printf("아스키코드가 가장 큰 문자: %c \n", max);
	return 0;
}
