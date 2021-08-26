#include <stdio.h>

int main(void)
{
	int lbottom_x, lbottom_y, rtop_x, rtop_y;
	
	printf("좌 하단 좌표: ");
	scanf("좌 하단 좌표: %d %d", &lbottom_x, &lbottom_y);
	printf("우 상단 좌표: ");
	scanf("우 상단 좌표:%d %d", &rtop_x, &rtop_y);
	
	printf("두 점이 이루는 직사각형의 넓이는: %d 입니다 \n", (rtop_x-lbottom_x) * (rtop_y-lbottom_y));
	return 0;
}
