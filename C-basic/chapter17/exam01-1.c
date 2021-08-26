#include <stdio.h>

void MaxAndMin(int arr[], int ** maxP, int ** minP)
{
	int i;

	*maxP=&arr[0];
	*minP=&arr[0];

	for(i=0; i<5; i++)
	{
		if(**maxP < arr[i])
			*maxP=&arr[i];
		else if(**minP > arr[i])
			*minP=&arr[i];
	}

}

int main(void)
{
	int * maxPtr;
	int * minPtr;
	int arr[5];
	int i;

	for(i=0; i<5; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	MaxAndMin(arr, &maxPtr, &minPtr);
	
	printf("max: %d\n", *maxPtr);
	printf("min: %d\n", *minPtr);
	return 0;
}
