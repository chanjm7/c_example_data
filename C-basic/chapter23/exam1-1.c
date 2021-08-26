#include <stdio.h>

typedef struct 
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point * ptrPos1, Point * ptrPos2)
{
	Point temp;
	temp = *ptrPos1;
	*ptrPos1 = *ptrPos2;
	*ptrPos2 = temp;
}

void ShowPosition(Point pos)
{
	printf("%d %d \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos1={2, 4};
	Point pos2={5, 7};
	
	SwapPoint(&pos1, &pos2);
	ShowPosition(pos1);
	ShowPosition(pos2);
	return 0;
}
