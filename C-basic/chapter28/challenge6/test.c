#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	char tel[20];
} UserInfo;

void Show(int * len, UserInfo ** dptrArr)
{
	int i;
	for(i=0; i<*len; i++)
	{	printf("dptraArr[%d]주소:  %p\n", i, &dptrArr[i]);
		printf("dptraArr[%d]값:  %p\n", i, dptrArr[i]);
	}
	printf("\n");
}

void Input(int * userNum, int * len, UserInfo *** dptrArr)
{
	int i;
	UserInfo * temp;

	if(*userNum == *len)
	{
		(*len)++;
	
		*dptrArr = (UserInfo **)realloc(*dptrArr, sizeof(UserInfo *) * (*len));
		for(i=0; i<*len; i++)
		{	printf("dptraArr[%d]주소:  %p\n", i, (*dptrArr)[i]);
			printf("dptraArr[%d]값:  %p\n", i, (*dptrArr)[i]);
		}
		printf("dptrArr 주소: %p\n", *dptrArr);
		printf("\n");
	}

	temp =  (UserInfo *)malloc(sizeof(UserInfo));
	printf("temp: %p\n", temp);
	(*dptrArr)[*len - 1] = temp;
	printf("dptrArr 주소: %p\n", *dptrArr);

	/*printf("이름 입력: "); scanf("%s", dptrArr[*len - 1]->name);
	printf("번호 입력: "); scanf("%s", dptrArr[*len - 1]->tel);*/
	(*userNum)++;
}

int main(void)
{	
	int len = 1;
	int userNum = 0;
	int n, i;
	UserInfo * temp;
	UserInfo ** dptrArr = (UserInfo **)malloc(sizeof(UserInfo *) * len); 
	printf("dptrArr 주소: %p\n", dptrArr);
	
	while(1)
	{
		printf("1입력, 2 나가기 \n");
		scanf("%d", &n);
		
		switch(n)
		{
			case 1:
				Input(&userNum, &len, &dptrArr);
				Show(&len, dptrArr);
				break;
			case 2:
				free(dptrArr);
				return 0;
		}
	}
	


	free(dptrArr);
	return 0;
}
