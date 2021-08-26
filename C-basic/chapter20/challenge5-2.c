#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{
	int computer, user; 
	int win=0, draw=0, gameOver=1;

	srand((int)time(NULL));
	while(gameOver)
	{
		printf("가위 1, 바위 2, 보 3 골라: ");
		scanf("%d", &user);
		computer=(rand()%3)+1;

		if(user==1)
			printf("당신은 가위 선택, ");
		else if(user==2)
			printf("당신은 바위 선택, ");
		else
			printf("당신은 보 선택, ");

		if(computer==1)
			printf("컴퓨터는 가위 선택, ");
		else if(computer==2)
			printf("컴퓨터는 바위 선택, ");
		else
			printf("컴퓨터는 보 선택, ");

		if(user-computer==-2)
		{	
			printf("이겼습니다!\n");
			win++;
		}
		else if(user-computer==2)
		{
			printf("졌습니다!\n");
			gameOver=0;
		}
		else if(user>computer)
		{
			printf("이겼습니다!\n");
			win++;
		}
		else if(user<computer)
		{
			printf("졌습니다!\n");
			gameOver=0;
		}
		else if(user==computer)
		{
			printf("비겼습니다!\n");
			draw++;
		}
		printf("승:%d 무:%d \n", win, draw);
	}
	return 0;
}

