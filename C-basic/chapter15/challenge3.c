#include <stdio.h>

int main(void)
{
	int arr[10];
	int num, i; 
	int	evenIdx=9, oddIdx=0;

	for(i=0; i<10; i++)
	{
		printf("정수 입력: ");
		scanf("%d", &num);

		if(num%2==0)
		{
			arr[evenIdx]=num;
			evenIdx--;
		}
		else
		{
			arr[oddIdx]=num;
			oddIdx++;
		}
	}
	
	for(i=0; i<10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
