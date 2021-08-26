#include <stdio.h>

int LinearSearch(int arr[], int len, int n)
{
	int i;

	for(i=0; i<len; i++)
	{
		if(arr[i] == n)
			return i;
	}
	return -1;
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	idx = LinearSearch(arr, sizeof(arr) / sizeof(int), 5);
	if(idx == -1)
		printf("탐색 실패\n");
	else
		printf("idx: %d \n", idx);

	idx = LinearSearch(arr, sizeof(arr) / sizeof(int), 6);
	if(idx == -1)
		printf("탐색 실패\n");
	else
		printf("idx: %d \n", idx);

	return 0;
}
