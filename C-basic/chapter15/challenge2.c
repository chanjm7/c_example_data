#include <stdio.h>

int GetBinary(int * arr, int * idx, int n)
{
	if(n==1)
	{
		arr[*idx]=n;
		return;
	}
	else if(n/2==1)
	{
		arr[*idx]=n%2;
		arr[++(*idx)]=n/2;
		return;
	}
	else
	{
		arr[*idx]=n%2;
		*idx+=1;
		return GetBinary(arr, idx, n/2);
	}
}

int main(void)
{
	int arr[50];
	int idx=0, num, i;

	printf("2진수 바꿀 정수 입력: ");
	scanf("%d", &num);
	
	GetBinary(arr, &idx, num);
	
	while(idx>=0)
	{
		printf("%d", arr[idx]);
		idx--;
	}

	printf("\n");
	return 0;
}
