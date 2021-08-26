#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	str[strlen(str)-1]=0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];

	fputs("str1 문자열 입력: ", stdout);
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);

	fputs("str2 문자열 입력: ", stdout);
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);
	
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3)-1]=0;
	RemoveBSN(str3);

	strncat(str3, str2, sizeof(str2)-1);

	fputs(str3, stdout);
	return 0;
}
