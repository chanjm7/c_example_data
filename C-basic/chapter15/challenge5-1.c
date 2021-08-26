#include <stdio.h>

int main(void)
{
	int arr[7];
	int idx1, idx2, temp, i, num=6;
	
	for(i=0; i<7; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	while(num!=0)
	{
		idx1=6;
		idx2=5;

		for(i=0; i<num; i++)
		{
			if(arr[idx1]>arr[idx2])
			{
				temp = arr[idx1];
				arr[idx1] = arr[idx2];
				arr[idx2] = temp;
			}
			idx1--;
			idx2--;
		}
		num--;
	}

	for(i=0; i<7; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
