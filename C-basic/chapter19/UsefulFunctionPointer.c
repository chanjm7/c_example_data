#include <stdio.h>
int WhoIsFirst(int age1, int age2, int (*cmp)(int, int))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if(age1>age2)
		return age1;
	else if(age2>age1)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if(age1<age2)
		return age1;
	else if(age2<age1)
		return age2;
	else
		return 0;
}


int main(void)
{
	int age1=40, age2=20;
	int first;

	printf("입장 순서1\n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세 먼저 입장\n", age1, age2, first);
	printf("\n");

	printf("입장 순서2\n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세 먼저 입장\n", age1, age2, first);
	
	return 0;
}
