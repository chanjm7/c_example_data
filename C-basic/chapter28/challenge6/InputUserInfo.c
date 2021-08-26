#include <stdlib.h>
#include <stdio.h>
#include "Struct_UserInfo.h"

void InputUserInfo(int * userNum, int * userInfoArrLen, UserInfo *** UserInfoDptrArr)
{
	if(*userNum == *userInfoArrLen)
	{
		(*userInfoArrLen)++;
		*UserInfoDptrArr = (UserInfo **)realloc(*UserInfoDptrArr, sizeof(UserInfo *) * (*userInfoArrLen));
	}
	
	(*UserInfoDptrArr)[*userInfoArrLen - 1] = (UserInfo *)malloc(sizeof(UserInfo));
	printf("[INSERT]\n");
	printf("Input Name: ");
	scanf("%s", (*UserInfoDptrArr)[*userInfoArrLen -1]->name);
	getchar();
	printf("Input Tel Number: ");
	fgets((*UserInfoDptrArr)[*userInfoArrLen -1]->tel, sizeof((*UserInfoDptrArr)[*userInfoArrLen -1]->tel), stdin);
	(*userNum)++;
}
