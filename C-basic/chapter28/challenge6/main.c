#include <stdio.h>
#include <stdlib.h>
#include "Struct_UserInfo.h"
#include "MenuOutput.h"
#include "InputUserInfo.h"
#include "DeleteUserInfo.h"
#include "SearchUserInfo.h"

int main(void)
{
	int userInfoArrLen = 1;
	int userNum = 0;
	int selMenu;
	UserInfo ** UserInfoPtrArr = (UserInfo **)malloc(sizeof(UserInfo *) * userInfoArrLen);

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
				printf("case1\n");
				InputUserInfo(&userNum, &userInfoArrLen, &UserInfoPtrArr);
				break;
			case 2:
				printf("case2\n");
				DeleteUserInfo(&userNum, &userInfoArrLen, &UserInfoPtrArr);
				break;
			case 3:
				printf("case3\n");
				SearchUserInfo(&userInfoArrLen, UserInfoPtrArr);
				break;
			case 4:
				printf("case4\n");
				PrintAllUserInfo(&userInfoArrLen, UserInfoPtrArr);
				break;
		}
		printf("\n");
	}
	
	free(UserInfoPtrArr);
	return 0;
}
