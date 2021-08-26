#include <stdio.h>

int main(void)
{
	char * strArr[3]={"SImple", "Array", "String"};

	printf("%c \n", *strArr[0]);
	printf("%c \n", *strArr[1]);
	printf("%c \n", *strArr[2]);
	return 0;
}
