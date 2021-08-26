#include <stdio.h>

int main(void)
{
	int n, num=1, k=0;
	printf("상수 n 입력: ");
	scanf("%d", &n);
	
	while((num*=2)<=n)
	{
		printf("%d\n", num);
		k++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d \n", k);

}
