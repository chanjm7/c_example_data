#include <stdio.h>

int main(void)
{
	char name[20];
	char gender;
	int age;

	FILE * fp = fopen("friend.txt", "rt");
	int ret;

	while(1)
	{
		ret=fscanf(fp, "%s %c %d", name, &gender, &age);
		if(ret==EOF)
		{
			break;
		}
		printf("%s %c %d \n", name, gender, age);
	}
	fclose(fp);
	return 0;
}
