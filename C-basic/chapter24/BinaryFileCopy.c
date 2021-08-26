#include <stdio.h>

int main(void)
{
	FILE * src = fopen("peoples.jpg", "rt");
	FILE * des = fopen("CopyPeoples.jpg", "wt");
	char buf[20];
	int readCnt, i=0;
	if(src==NULL || des==NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	
	while(1)
	{
		readCnt=fread((void *)buf, 1, sizeof(buf), src);

		if(readCnt<sizeof(buf))
		{
			if(feof(src)!=0)
			{
				fwrite((void *)buf, 1, sizeof(buf), des);
				puts("파일 복사 성공");
				break;
			}
			else
				puts("파일 복사 실패");
				
		}
		fwrite((void *)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}
