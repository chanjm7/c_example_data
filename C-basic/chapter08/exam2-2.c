#include <stdio.h>

int main(void)
{
	int A, Z;

	for(A=0; A<10; A++)
	{
		for(Z=0; Z<10; Z++)
		{ 	
			if(!(A+Z==9))
				continue;

			printf("A: %d , Z: %d, 결과: %d%d \n", A, Z, A+Z, Z+A);
		}
	}
	return 0;
}
