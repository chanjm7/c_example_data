#include <stdio.h>

struct employee
{
	char name[20];
	char perID[20];
	int pay;
};

int main(void)
{
	struct employee man;

	fputs("이름 입력: ", stdout);
	scanf("%s", man.name);

	fputs("주민번호 입력: ", stdout);
	scanf("%s", man.perID);

	fputs("급여 입력: ", stdout);
	scanf("%d", &man.pay);
	
	printf("이름: %s \n", man.name);
	printf("주민번호: %s \n", man.perID);
	printf("급여: %d \n", man.pay);
	return 0;
}
