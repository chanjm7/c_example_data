#include <stdio.h>



int main(void)
{
	int a=1, b=1;
	int arr[2][2];

	int * ptr1=&a;
	int * ptr2=&b;

	arr[*ptr1][*ptr2]=100;
	printf("%d\n", arr[1][1]);
}
