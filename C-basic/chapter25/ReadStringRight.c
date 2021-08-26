#include <stdio.h>
#include <stdlib.h>

void ReadUserName(char ** name)
{
	*name = (char *)malloc(sizeof(char) * 20);
	printf("이름 입력: ");
	scanf("%s", *name);
}

int main(void)
{
	char * name1;
	char * name2;

	ReadUserName(&name1);
	printf("name1: %s \n", name1);

	ReadUserName(&name2);
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);

	free(name1);
	free(name2);
	return 0;
}
