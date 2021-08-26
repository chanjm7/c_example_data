#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

Point GetCurPos(void)
{
	Point cen;
	printf("현재 x, y위치 입력: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void ShowPosition(Point pos)
{
	printf("%d %d \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point curpos = GetCurPos();
	ShowPosition(curpos);
	return 0;
}
