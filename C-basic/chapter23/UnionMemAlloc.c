#include <stdio.h>

typedef struct sbox
{
	int mem1; 
	int mem2;
	double mem3;
} SBox;

typedef union ubox
{
	int mem1;
	int mem2;
	int mem3;
} UBox;

int main(void)
{
	SBox sbox;
	UBox ubox;

	printf("%p %p %p\n", &sbox.mem1, &sbox.mem2, &sbox.mem3);
	printf("%p %p %p\n", &ubox.mem1, &ubox.mem2, &ubox.mem3);
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
	return 0;
}
