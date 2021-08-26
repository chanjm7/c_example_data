#include <stdio.h>

typedef union rbbuf
{
	int iBuf;
	char bBuf[4];
	short sbuf[2];
} RDBuf;

int main(void)
{
	RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));
	
	printf("상위 2바이트: %u \n", buf.sbuf[0]);
	printf("하위 2바이트: %u \n", buf.sbuf[1]);
	printf("상위 1바이트: %c \n", buf.bBuf[0]);
	printf("하위 1바이트: %c \n", buf.bBuf[3]);
	printf("%d \n", buf.iBuf);
	return 0;
}
