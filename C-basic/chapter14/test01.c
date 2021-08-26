#include <stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
void ArrFunc1(char * arr)
{
	printf("Func1: %p \n", &arr);
}

void ArrFunc2(char arr[])
{
	printf("Fun2: %p \n", &arr);
}

int main(void)
{
	char arr[3]={1, 2, 3};
	printf("%p\n", arr);
	printf("%d\n", my_sizeof(&arr));
	ArrFunc1(arr);
	ArrFunc2(arr);
	return 0;	
}
