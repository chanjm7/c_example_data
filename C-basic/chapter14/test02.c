#include <stdio.h>

int main(void)
{
	char arr[5]={1, 2, 3, 4, 5};
	char * ptr=arr;

	printf("arr: %p\n", arr);
	printf("arr+1: %p\n", arr+1);
	printf("&arr: %p\n", &arr);
	printf("&arr+1: %p \n", &arr+1);

	printf("ptr: %p\n", ptr);
	printf("ptr+1: %p\n", ptr+1);
	printf("&ptr: %p\n", &ptr);
	printf("&ptr+1: %p\n", &ptr+1);


	return 0;
}
