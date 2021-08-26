#include <stdio.h>

int main(void)
{
	char arr[11] = {'"', 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '"'};
	int i;

	for(i=0; i<11; i++)
		printf("%c", arr[i]);
	printf("\n");
	return 0;
}
