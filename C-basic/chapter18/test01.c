#include <stdio.h>
#define my_sizeof(x) ((char *)(&x+1) - (char *)&x)

int main(void)
{
	int arr[3][3];

	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);

	printf("sizeof(arr): %d\n", my_sizeof(arr));
	printf("sizeof(arr[0]): %d\n", my_sizeof(arr[0]));
	printf("sizeof(arr[1]): %d\n", my_sizeof(arr[1]));

	return 0;
}
