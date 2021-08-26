#include <stdio.h>
#include <string.h>
#include "Struct_UserInfo.h"

void SearchUserInfo(int * userInfoArrLen, UserInfo ** UserInfoPtrArr)
{
	char str[20];
	int i;

	printf("[Search]\n");
	printf("이름 입력: ");
	scanf("%s", str);

	for(i=0; i<(*userInfoArrLen); i++)
	{
		if(strcmp(str, UserInfoPtrArr[i]->name) == 0)
		{
			printf("[Search Data]\n");
			printf("Name: %s\n", UserInfoPtrArr[i]->name);
			printf("Tel: %s\n", UserInfoPtrArr[i]->tel);
			return;
		}
	}

}
