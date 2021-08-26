#include <stdio.h>

void Calc(int n);

int main(void)
{
	int money;
	int seauggang=700;
	int creamBread=500;
	int coke=400;
	int i, j, k;
	printf("당신이 가지고 있는 돈:  ");
	scanf("%d", &money);
	
	for(i=1; i<money/coke; i++)
		for(j=1; j<money/creamBread; j++)
			for(k=1; k<money/seauggang; k++)
			{
				if(coke*i + creamBread*j + seauggang*k == money)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", j, k, i);
			}
	printf("어떻게 구입하시겠습니까? \n");

	
	return 0;
}
