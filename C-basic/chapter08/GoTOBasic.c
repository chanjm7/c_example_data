#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO;
	else if(num==3)
		goto THREE;
	else
		goto OTHER;
	

ONE:
	printf("자연수 1~ \n");
	goto END;
	
TWO:
	printf("2! \n");
	goto END;

THREE:
	printf("3! \n");
	goto END;

OTHER:
	printf("? \n");

END:
	return 0;

}
