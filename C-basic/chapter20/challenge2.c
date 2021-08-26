#include <stdio.h>

void GetSnailArrColumn(int len, int n, int check, int * ele, int * column, int * row, int  arr[][len])
{
	int i;

	if(check==0)
	{
		for(i=0; i<n; i++)
		{
			(*column)--;
			arr[*row][*column]=*ele;
			(*ele)++;
		}
	}
	else
	{
		for(i=0; i<n; i++)
		{
			(*column)++;
			arr[*row][*column]=*ele;
			(*ele)++;
		}
	}
}

void GetSnailArrRow(int len, int n, int check, int * ele, int * row, int * column, int  arr[][len])
{
	int i, j;

	if(check==0)
	{
		for(i=0; i<n; i++)
		{
			(*row)++;
			arr[*row][*column]=*ele;
			(*ele)++;
		}
	}
	else
	{
		for(i=0; i<n; i++)
		{
			(*row)--;
			arr[*row][*column]=*ele;
			(*ele)++;

		}
	}
}

void GetSnailArr(int n, int (*arr)[n])
{
	int i;
	int column=0, row=0, ele=1;

	for(i=0; i<n; i++)
	{
		arr[0][i]=ele;
		ele++;
		column=i;
	}

	for(i=0; i<n-1; i++)
	{
		GetSnailArrRow(n, n-(i+1), i%2, &ele,  &row, &column, arr);
		GetSnailArrColumn(n, n-(i+1), i%2, &ele, &column, &row, arr);
	}
}

void ShowArrEle(int n, int arr[][n])
{
	int i, j;

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int n;
	printf("배열의 길이 입력: ");
	scanf("%d", &n);
	int arr[n][n];

	GetSnailArr(n, arr);
	ShowArrEle(n, arr);

	return 0;
}
