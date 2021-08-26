#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int * ptr = (int *)malloc(sizeof(int) * 5);
	
	int input=0, i=0, j=0;
	
	while(1)
	{
		printf("정수 입력: ");
		scanf("%d", &input);

		if(input==-1)
			break;

		if(i==5+j)
		{
			j+=3;
			printf("i: %d 5+j: %d \n", i, 5+j);
			ptr = (int *)realloc(ptr, sizeof(int) * (5+j));
		}
		ptr[i]=input;
		i++;
	};

	for(j=0; j<i; j++)
		printf("%d: %d \n", j, ptr[j]);

	free(ptr);
	return 0;
}
