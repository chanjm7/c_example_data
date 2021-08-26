#include <stdio.h>

int main(void)
{
	int arr[3][2]=
	{
		{1, 2},
		{3, 4},
		{5, 6}
	};
	printf("%p\n", arr[2]);
	printf("%p\n", *(arr+2));
	printf("%d\n", *(*(arr+2)+1));
	printf("%d\n", arr[2][1]);
	return 0;
}
