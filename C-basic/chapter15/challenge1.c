#include <stdio.h>

void ShowEvenNum(int * arr)
{
	int i;
	
	printf("짝수 출력: ");
	for(i=0; i<10; i++)
	{
		if(arr[i]%2==0)
			printf("%d ", arr[i]);
	}
	printf("\n");
}

void ShowOddNum(int * arr)
{
	int i;
	printf("홀수 출력: ");
	for(i=0; i<10; i++)
	{
		if(arr[i]%2!=0)
			printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[10];
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("정수 입력: ");
		scanf("%d", &arr[i]);
	}

	ShowEvenNum(arr);
	ShowOddNum(arr);
	return 0;
}
