#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point arr[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("arr[%d]의 xpos, ypos입력: ", i);
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for(i=0; i<3; i++)
	{
		printf("%d %d\n", arr[i].xpos, arr[i].ypos);
	}
	return 0;
}
