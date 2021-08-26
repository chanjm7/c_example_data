#include <stdio.h>

typedef struct 
{
	int x;
	int y;
} Sbox;

int main(void)
{
	Sbox a = {10, 20};
	Sbox * i;

	i=&a;

	printf("%d \n", i->x);
}
