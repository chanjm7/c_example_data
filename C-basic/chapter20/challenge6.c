#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetAnswer(int answerArr[])
{
	int i;
	srand((int)time(NULL));
	for(i=0; i<3; i++)
	{
		while(1)
		{

			answerArr[i]=rand()%10;
			if(i==0)
				break;
			else if(i==1&&answerArr[0]!=answerArr[1])
				break;
			else if(i==2&&(answerArr[0]!=answerArr[2]&&answerArr[1]!=answerArr[2]))
				break;
		}
	}

}

void UserInputNum(int userNumArr[])
{
	int i;
	printf("숫자 입력: ");
	scanf("%d %d %d", &userNumArr[0], &userNumArr[1], &userNumArr[2]);


}

void StrikeiAndBallCheck(int * strike, int answerArr[], int userNumArr[])
{
	int ball=0;
	int i, j;

	*strike=0;
	
	for(i=0; i<3; i++)
	{
		if(answerArr[i]==userNumArr[i])
			(*strike)++;

		for(j=0; j<3; j++)
		{
			if(i==j)
				continue;
			else if(answerArr[i]==userNumArr[j])
				ball++;
		}
	}
	printf("%dstrike, %dball!!\n", *strike, ball);
}



int main(void)
{
	int answer[3];
	int userNum[3];
	int strike;
	int count=1;

	GetAnswer(answer);
	while(strike!=3)
	{
		UserInputNum(userNum);
		printf("%d 번째 도전 결과: ", count);
		StrikeiAndBallCheck(&strike, answer, userNum);
		count++;
	}
	printf("\nGame Over!!\n");
	return 0;
}
