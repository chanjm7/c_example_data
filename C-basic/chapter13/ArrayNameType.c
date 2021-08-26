#include <stdio.h>

int main(void)
{
	int arr[3]={0, 1, 2};
	printf("배열의 이름: %p \n", arr);
	printf("1: %p \n", &arr[0]);
	printf("2: %p \n", &arr[1]);
	printf("3: %p \n", &arr[2]);
	return 0;
}
