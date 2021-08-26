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
		
		
		if(user==1&&computer==3)
		{
			printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
			win++;
		}
		else if(user==2&&computer==1)
		{
			printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
			win++;		
		}
		else if(user==3&&computer==2)
		{
			printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
			win++;
		}
		else if(user==1&&computer==2)
		{
			printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다ㅠ\n");
			gameOver=0;
		}
		else if(user==2&&computer==3)
		{
			printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다ㅠ\n");
			gameOver=0;
		}
		else if(user==3&&computer==1)
		{
			printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다ㅠ\n");
			gameOver=0;
		}
		else if(user==1&&computer==1)
		{
			printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다ㅎ\n");
			draw++;
		}
		else if(user==2&&computer==2)
		{
			printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다ㅎ\n");
			draw++;
		}
		else if(user==3&&computer==3)
		{
			printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다ㅎ\n");
			draw++;
		}
	}
	printf("승: %d, 무: %d \n", win, draw);
	return 0;
}
