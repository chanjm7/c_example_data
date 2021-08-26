#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MenuOutput.h"

typedef struct
{
	char name[20];
	char tel[20];
} UserInfo;

void InputUserInfo(void)
{
	UserInfo input;
	FILE * fp = fopen("text.txt", "at");
	
	printf("[ INSERT ]\n");
	printf("이름 입력: ");
	scanf("%s", input.name); getchar();

	printf("번호 입력: ");
	fgets(input.tel, sizeof(input.tel), stdin);
	input.tel[strlen(input.tel)-1] = '\0';

	fputc(' ', fp);
	fputs(input.name, fp);
	fputc(' ', fp);
	fputs(input.tel, fp);
	fclose(fp);
}

void DeleteUserInfo(void)
{
	FILE * fp1;
	FILE * fp2;

	char deleteName[20];
	char readName[20];
	char readTel[20];
	char buf[30];
	int readCnt;

	printf("[ DELETE ]\n");
	printf("이름 입력: ");
	scanf("%s", deleteName); getchar();
	
	fp1 = fopen("text.txt", "rt");
	fp2 = fopen("text1.txt", "wt");
	
	while(1)
	{
		fscanf(fp1, "%s", readName);
		if(fscanf(fp1, "%s", readTel) == EOF)
			break;

		if(strcmp(deleteName, readName) != 0)
		{
			fputc(' ', fp2);
			fputs(readName, fp2);
			fputc(' ', fp2);
			fputs(readTel, fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);

	fp1 = fopen("text.txt", "wb");
	fp2 = fopen("text1.txt", "rb");

	while(1)
	{
		readCnt = fread((void *)buf, 1, sizeof(buf), fp2);

		if(readCnt < sizeof(buf))
		{
			fwrite((void *)buf, 1, readCnt, fp1);
			break;
		}
		fwrite((void *)buf, 1, sizeof(buf), fp1);
	}
	fclose(fp1);
	fclose(fp2);
}

void SearchUserInfo(void)
{
	FILE * fp = fopen("text.txt", "rt");
	char searchName[20];
	char readName[20];
	char readTel[20];

	printf("[ SEARCH ]\n");
	printf("이름입력: "); scanf("%s", searchName);

	while(1)
	{
		fscanf(fp, "%s", readName);
		if(fscanf(fp, "%s", readTel) == EOF)
			break;
		if(strcmp(searchName, readName) == 0)
		{
			printf("[ Data ]\n");
			printf("이름: %s\n", readName);
			printf("번호: %s\n", readTel);
			break;
		}
	}
	fclose(fp);
}

void PrintAllUserInfo(void)
{
	FILE * fp = fopen("text.txt", "rt");
	char readName[20];
	char readTel[20];

	printf("[ All Data ]\n");
	while(1)
	{
		fscanf(fp, "%s", readName);
		if(fscanf(fp, "%s", readTel) == EOF)
			break;

		printf("이름: %s\n", readName);
		printf("번호: %s\n", readTel);
		printf("\n");
	
	}
}

int main(void)
{
	int selMenu;

	while(1)
	{
		MenuOutput();
		scanf("%d", &selMenu);
		getchar();

		if(selMenu == 5)
			break;
		
		switch(selMenu)
		{
			case 1:
				InputUserInfo();
				break;
			case 2:
				DeleteUserInfo();
				break;
			case 3:
				SearchUserInfo();
				break;
			case 4:
				PrintAllUserInfo();
				break;
		}
		printf("\n");
	}
	return 0;
}
