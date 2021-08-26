#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char * ptr1 = (char *)malloc(sizeof(char) * 10);
	
	printf("%d \n", strlen(ptr1));

	free(ptr1);
}
