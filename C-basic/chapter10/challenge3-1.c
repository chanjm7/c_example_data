#include <stdio.h>

int NumComp(int n1, int n2)
{
	if(n1<n2)
		return n1;
	else
		return n2;
}

int GetGCD(int n1, int n2)
{
	int i, result;
	
	for(i=1; i<NumComp(n1, n2); i++)
	{
		if(n1%i==0 && n2%i==0)
			result = i;
	}
	return result;
}

int main(void)
{
	int num1, num2;

	printf("최대공약수를 구할 정수 두개 입력: ");
	scanf("%d %d", &num1, &num2);
	
	printf("%d, %d의 최대공약수는 %d입니다. \n", num1, num2, GetGCD(num1, num2));
	return 0;
}
