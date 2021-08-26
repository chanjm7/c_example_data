#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct 
{
	Point leftTop;
	Point rightBottom;
} Rectangle;

void ShowRectanglePosition(Rectangle square)
{
	printf("네 점의 좌표\n");
	printf("[%d %d] \n", square.leftTop.xpos, square.leftTop.ypos);
	printf("[%d %d] \n", square.leftTop.xpos, square.rightBottom.ypos);
	printf("[%d %d] \n", square.rightBottom.xpos, square.leftTop.ypos);
	printf("[%d %d] \n", square.rightBottom.xpos, square.rightBottom.ypos);
}

void ShowAreaOfRectangle(Rectangle square)
{
	int area;
	area = (square.rightBottom.xpos - square.leftTop.xpos) * (square.rightBottom.ypos - square.leftTop.ypos);
	printf("넓이: %d \n", area);
}

Rectangle GetRectanglePos(void)
{
	Rectangle square;
	printf("좌 상단 x, y좌표 입력: "); scanf("%d %d", &square.leftTop.xpos, &square.leftTop.ypos);
	printf("우 하단 x, y좌표 입력: "); scanf("%d %d", &square.rightBottom.xpos, &square.rightBottom.ypos);
	return square;
}

int main(void)
{
	Rectangle square=GetRectanglePos();
	ShowAreaOfRectangle(square);
	ShowRectanglePosition(square);
	return 0;
}
