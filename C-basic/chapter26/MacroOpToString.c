#include <stdio.h>
#define STRING_JOB(A) A+1 

int main(void)
{
	int str[2];

	str[0] = STRING_JOB(24);

	printf("%d \n", str[0]);
	return 0;
}
