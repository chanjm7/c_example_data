#include <stdio.h>

int main(void)
{
	char name[20];
	char gender;
	int age;

	FILE * fp = fopen("friend.txt", "wt");
	int i;

	for(i=0; i<3; i++)
	{
		printf("이름, 성병, 나이 순으로 입력: ");
		scanf("%s %c %d", name, &gender, &age);
		getchar();
		fprintf(fp,"%s %c %d \n", name, gender, age);
	}
	fclose(fp);
	return 0;
}
