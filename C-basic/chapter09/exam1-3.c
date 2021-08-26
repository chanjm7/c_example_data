#include <stdio.h>

void Fibo(int num);

int main(void)
{	
	int num;
	printf("fibo 출력 갯수: ");
	scanf("%d", &num);
	Fibo(num);
}

void Fibo(int num)
{
	int x=0, y=1, z, i;

	if(num == 1)
		printf("%d\n", x);
	else
		printf("%d\n%d\n", x, y);
	for(i=0; i<num-2; i++)
	{
		z=x+y;
		x=y;
		y=z;
		printf("%d\n", z);
	}
}
