#include <stdio.h>

int main(void)
{
	char * str="Simple String";

	printf("1. puts test --------\n");
	puts(str);
	puts("So Simple String");
	
	printf("2. fputs test ---------\n");
	fputs(str, stdout); 
	fputs("So Simple String", stdout); 

	printf("end--------------\n");
	return 0;
}
