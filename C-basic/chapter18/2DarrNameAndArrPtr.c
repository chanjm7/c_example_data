#include <stdio.h>

int main(void)
{
	int arr1[2][2]=
	{
		{1, 2},
		{3, 4}
	};

	int arr2[3][2]=
	{
		{1, 2},
		{3, 4},
		{5, 6}
	};

	int arr3[4][2]=
	{
		{1, 2},
		{3, 4},
		{5, 6},
		{7, 8}
	};

	int (*ptr) [3];
	int i;
	ptr=arr1;

	for(i=0; i<2; i++)
	{
		printf("%d %d %d", ptr[i][0], ptr[i][1], ptr[i][2]);
		printf("\n");
	}
	printf("\n");

	return 0;
}
