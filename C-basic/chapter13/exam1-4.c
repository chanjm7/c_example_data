#include <stdio.h>

int main(void)
{
	int arr[6]={1, 2, 3, 4, 5, 6};
	int * ptr1=arr;
	int * ptr2=&arr[5];
	int temp, i;

	for(i=0; i<3; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}
	printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	return 0;
}
