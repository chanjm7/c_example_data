#include <stdio.h>

int main(void)
{
	char str[]="I am iron man";
	char * str2 = "I am thor";
	char arr[10]={'H', 'e', 'l', 'l', 'o'};

	printf("%c \n", *str);
	printf("%c \n", *str2);
	printf("%c \n", *arr);
	return 0;
}
