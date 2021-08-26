# include <stdio.h>
#define DiffABS2(X, Y) ((X) > (Y) ? (X)-(Y) : (Y)-(X)); 

int DiffABS1(int a, int b)
{
	if(a>b)
		return a-b;
	else
		return b-a;
}

int main(void)
{
	int result1, result2;

	result1 = DiffABS1(1, 3);
	result2 = DiffABS2(1, 3);

	printf("%d \n", result1);
	printf("%d \n", result2);
	return 0;
}
