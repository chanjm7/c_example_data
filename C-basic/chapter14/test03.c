#include <stdio.h>

void f(int * par)
{
	printf("par: %p\n", par);
	*par=0;
	printf("대입 후: %p\n", par);
}

int main(void)
{
	int num=0;
	int * arg=&num;
	f(arg);
	printf("arg: %p\n", arg);

}
