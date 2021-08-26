#include <stdio.h>

void Swap(int ** dptr1, int ** dptr2)
{
	int * temp;
	temp=*dptr1;
	*dptr1=*dptr2;
	*dptr2=temp;
}

int main(void)
{
	int num1=1;
	int num2=2;

	int * ptr1=&num1;
	int * ptr2=&num2;
	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);

	Swap(&ptr1, &ptr2);
	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);
	return 0;
}
