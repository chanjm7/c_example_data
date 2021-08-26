#include <stdio.h>

void Swap3(int * ptr1, int * ptr2, int * ptr3)
{
	int temp1, temp2;
	temp1=*ptr1;
	*ptr1=*ptr3;
	temp2=*ptr2;
	*ptr2=temp1;
	*ptr3=temp2;
}

int main(void)
{
	int num1=1, num2=2, num3=3;

	Swap3(&num1, &num2, &num3);
	printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
	return 0;
}
