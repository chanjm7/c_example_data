#include <stdio.h>

int TwoSqure(int n)
{
	if(n==1)
		return 2;
	return TwoSqure(n-1) * 2;
}

int main(void)
{
	int num;
	printf("정수입력: ");
	scanf("%d", &num);

	printf("2의 %d승은 %d \n", num, TwoSqure(num));
	return 0;
}
