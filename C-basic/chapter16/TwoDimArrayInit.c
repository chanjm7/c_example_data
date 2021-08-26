#include <stdio.h>

void ShowArrEle(int arr[][3])
{
	int i, j;
	for(i=0; i<3; i++)
	{	
		for(j=0; j<3; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int main(void)
{
	int arr1[3][3]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int arr2[3][3]={
		{1},
		{4, 5},
		{7, 8, 9}
	};

	int arr3[3][3]={1, 2, 3, 4, 5, 6, 7};

	ShowArrEle(arr1);
	ShowArrEle(arr2);
	ShowArrEle(arr3);
	return 0;
}
