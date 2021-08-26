#include <stdio.h>

struct employee
{
	char name[20];
	char perID[20];
	int pay;
};

int main(void)
{
	struct employee arr[3];
	int i;

	for(i=0; i<3; i++)
	{
		printf("%d번째 종업원\n", i+1);
		printf("이름 입력: "); scanf("%s", arr[i].name);
		printf("주민번호 입력: "); scanf("%s", arr[i].perID);
		printf("급여 입력: "); scanf("%d", &arr[i].pay);
	}

	for(i=0; i<3; i++)
	{
		printf("%d번째 종업원\n", i+1);
		printf("이름: %s \n", arr[i].name); 
		printf("주민번호 입력: %s \n", arr[i].perID); 
		printf("급여 입력: %d \n", arr[i].pay); 
	}
	return 0;
}
