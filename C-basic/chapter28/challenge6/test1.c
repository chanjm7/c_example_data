#include <stdio.h>
#include <stdlib.h>


void func(int * arr)
{
	*arr = (int *)malloc(sizeof(int) * 3);
	printf("함수 안arr주소: %p\n", arr);
}

int main(void)
{	
	int * arr = (int *)malloc(sizeof(int) * 3);
	printf("arr주소: %p\n", arr);
	
	func(arr);
	printf("함수 호출 후arr주소: %p\n", arr);


	free(arr);
	return 0;
}
