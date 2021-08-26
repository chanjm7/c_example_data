#include <stdio.h>

void ShowTwoDimArrEle(int (*arr)[4])
{
	int i, j;

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void TwoDimArrNinetyDegRotate(int arr1[][4], int (*arr2)[4])
{
	int i, j;
	int x, y=0;

	for(i=0; i<4; i++)
	{
		x=3;
		for(j=0; j<4; j++)
		{
			arr2[i][j] = arr1[x][y];
			x--;
		}
		y++;
	}

}

int main(void)
{
	int arr1[4][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int arr2[4][4];
	
	ShowTwoDimArrEle(arr1);
	TwoDimArrNinetyDegRotate(arr1, arr2);
	ShowTwoDimArrEle(arr2);
	TwoDimArrNinetyDegRotate(arr2, arr1);
	ShowTwoDimArrEle(arr1);
	TwoDimArrNinetyDegRotate(arr1, arr2);
	ShowTwoDimArrEle(arr2);


	return 0;
}
