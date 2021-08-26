#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int strlen;
	char * ptr1;
	char * ptr2;
	int i, j=0, count=0;

	fputs("문자열 길이: ", stdout);
	scanf("%d", &strlen);
	getchar();

	ptr1 = (char *)malloc(sizeof(char) * (strlen));
	ptr2 = (char *)calloc(strlen, sizeof(char));

	fputs("문자열 입력: ", stdout);
	fgets(ptr1, strlen, stdin);
	printf("%s \n", ptr1);

	for(i=0; i<strlen; i++)
	{
		if(ptr1[i]==' ' || ptr1[i]=='\0')
		{
			if(ptr1[i]==' ')
				ptr2[strlen-2-i]=' ';
			else
				ptr2[strlen-1]='\0';
			while(j<count)
			{
				ptr2[strlen-1-i+j]=ptr1[i-count+j];
				j++;
			}
			j=0;
			count=0;
		}
		else
			count++;
	}
	printf("%s \n", ptr2);
	
	free(ptr1);
	free(ptr2);
	return 0;
}
