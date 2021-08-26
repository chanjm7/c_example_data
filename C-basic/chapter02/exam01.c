#include<stdio.h>

int main(void)
{	
	/*
	printf("char %d\n", sizeof(char));
	printf("short %d\n", sizeof(short));
	printf("int %d\n", sizeof(int));
	printf("long %d\n", sizeof(long));
	printf("longlong %d\n", sizeof(long long));
	printf("float %d\n", sizeof(float));
	printf("double %d\n", sizeof(double));
	*/
	/*
	double rad;
	double area;
	scanf("%f", &rad);

	area = rad*rad*3.1415;
	printf("원의 넓이: %f\n", area);
	*/

	int top_left_x, top_left_y;
	int bottom_right_x, bottom_right_y;
	int area;
	
	printf("좌상단 x, y좌표:\n");
	scanf("%d %d", &top_left_x, &top_left_y);
	printf("우하단 x, y좌표:\n");
	scanf("%d %d", &bottom_right_x, &bottom_right_y);
	area = (bottom_right_x - top_left_x) * (bottom_right_y - top_left_y);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.\n",area);

	return 0;
}
