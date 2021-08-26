#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

int main(void)
{
	Point pos={10, 20};
	Person men={"이찬민", "010-9117-8593", 24};

	printf("xpos: %d ypos: %d \n", pos.xpos, pos.ypos);
	printf("이름: %s\n", men.name);
	printf("번호: %s\n", men.phoneNum);
	printf("나이: %d\n", men.age);
	return 0;
}
