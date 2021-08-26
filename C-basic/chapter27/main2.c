#include <stdio.h>

/*stdiv2.h*/
#ifndef __STDIV2_H__
#define __STDIV2_H__

typedef struct
{
	int quotient;
	int remainder;
} Div;
#endif

/*intdiv4.h*/
#ifndef __INTDIV4_H__
#define __INTDIV4_H__

/*stdiv2.h*/
#ifndef __STDIV2_H__
#define __STDIV2_H__

typedef struct
{
	int quotient;
	int remainder;
} Div;
#endif

Div IntDiv(int num1, int num2);
#endif

int main(void)
{
	Div val = IntDiv(5, 2);
	printf("몫: %d \n", val.quotient);
	printf("나머지: %d \n", val.remainder);
	return 0;
}
