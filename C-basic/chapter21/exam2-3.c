#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RemoveBSN(char str[])
{
	str[strlen(str)-1]=0;
}

int GetBlankIdx(char str[])
{
	int i;

	for(i=0; i<strlen(str); i++)
	{
		if(str[i]==32)
		return i;
	}
}

int main(void)
{
	char str1[20];
	char str2[20];
	int i;
	
	fputs("1.이름과 나이 입력: ", stdout);
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);

	fputs("2.이름과 나이 입력: ", stdout);
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);
	
	if(!strncmp(str1, str2, GetBlankIdx(str1)+1))
		printf("이름이 같습니다\n");
	else
		printf("이름이 같지 않습니다\n");

	if(atoi(&str1[GetBlankIdx(str1)+1])==atoi(&str2[GetBlankIdx(str2)+1]))
		printf("나이가 같습니다\n");
	else
		printf("나이가 같지 않습니다\n");
	return 0;
}
