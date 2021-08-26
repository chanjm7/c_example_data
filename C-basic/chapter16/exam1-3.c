#include <stdio.h>

int main(void)
{
	int arr[5][5];

	int i, j, total1, total2, total3=0;

	for(i=0; i<4; i++)
	{	
		if(i==0)
			printf("철희 \n");
		else if(i==1)
			printf("철수 \n");
		else if(i==2)
			printf("영희 \n");
		else
			printf("영수 \n");
		for(j=0; j<4; j++)
		{

			if(j==0)
				printf("국어 점수: ");
			else if(j==1)
				printf("영어 점수: ");
			else if(j==2)
				printf("수학 점수: ");
			else
				printf("국사 점수: ");
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<5; i++)
	{
		total1=0;
		total2=0;
		for(j=0; j<5; j++)
		{
			if(i<4 && j<4)
			{
				total1+=arr[i][j];
				total2+=arr[j][i];
			}
			else if(i!=4 && j==4)
			{
				total3+=total1;
				arr[i][j]=total1;
				arr[j][i]=total2;
			}
			else if(i==4 && j==4)
			{
				arr[i][j]=total3;
			}
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
