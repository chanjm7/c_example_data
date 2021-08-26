#include <stdio.h>
#include "Struct_UserInfo.h"

void PrintAllUserInfo(int * userInfoArrLen, UserInfo ** UserInfoPtrArr)
{
	int i;

	printf("[Print All Data]\n");
	for(i=0; i<(*userInfoArrLen); i++)
	{
		printf("Name: %s\n", UserInfoPtrArr[i]->name);
		printf("Tel: %s\n", UserInfoPtrArr[i]->tel);
		printf("\n");
	}
}
