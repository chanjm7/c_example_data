#include <stdio.h>

int main(void)
{
	int arr[5];
	int i;
	int min, max, sum=0;

	printf("정수 5개 입력: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	 
	min = arr[0];
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	for(i=0; i<5; i++)
	{
		if(arr[i]>max)
			max = arr[i];
		if(arr[i]<min)
			min = arr[i];
		sum += arr[i];
	}	
	printf("입력된 정수 중에서 최댓값: %d \n", max);
	printf("입력된 정수 중에서 최솟값: %d \n", min);
	printf("입력된 정수 합: %d \n", sum);
	return 0;
}
