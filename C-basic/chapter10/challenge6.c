#include <stdio.h>

int main(void)
{
	int input, h=0, m=0, s=0;
	printf("초 입력: ");
	scanf("%d", &input);

	if(input>=3600)
	{
		h = input/3600;
		if((input%3600)>=60)
		{
			m = (input%3600)/60;
			s = (input%3600)%60;
		}
		else
			s = input%3600;
	}
	else if(input>=60)
	{	
		m = input/60;
		s = input%60;
	}
	else
		s = input;
			
	printf("h: %d, m: %d, s: %d \n", h, m, s);
	return 0;
}
