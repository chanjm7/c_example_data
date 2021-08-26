#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Struct_UserInfo.h"

void DeleteUserInfo(int * userNum, int * userInfoArrLen, UserInfo *** UserInfoDptrArr)
{
	char str[20];
	UserInfo * temp;
	int i; 
	
	printf("[DELETE]\n");
	printf("이름 입력: ");
	scanf("%s", str);
	getchar();

	for(i=0; i<(*userInfoArrLen); i++)
	{
		if(strcmp(str, (*UserInfoDptrArr)[i]->name) == 0)
		{
			temp = (*UserInfoDptrArr)[*(userInfoArrLen)-1];
			(*UserInfoDptrArr)[*(userInfoArrLen)-1] = (*UserInfoDptrArr)[i];
			(*UserInfoDptrArr)[i] = temp;
			free((*UserInfoDptrArr)[*(userInfoArrLen)-1]);
			(*userInfoArrLen)--;
			(*userNum)--;
			*UserInfoDptrArr = (UserInfo **)realloc(*UserInfoDptrArr, sizeof(UserInfo *) * (*userInfoArrLen));
			return;
		}
	}
	printf("같은 이름이 없음\n");
}
