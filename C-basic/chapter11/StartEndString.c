#include <stdio.h>

int main(void)
{
	char str[50]="I like Chicken";

	printf("%s \n", str);
	str[6]='\0';
	printf("%s \n", str);
	return 0;
}
