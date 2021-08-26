#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int * ptr=&arr[4];
	int result=0;
	int i;

	for(i=0; i<5; i++)
	{
		result += *(ptr--);
	}
	printf("arr배열 요소의 총 합: %d \n", result);
}
