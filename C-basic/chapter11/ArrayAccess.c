#include <stdio.h>

int main(void)
{
	int arr[5];
	int i;

	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

	for(i=0; i<5; i++)
	{
		printf("arr 배열의 %d번째 값: %d \n", i+1, arr[i]);
	}
	printf("arr배열 주소: %p\n", arr);
	return 0;
}
