#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "at");

	fputs("#즐겨먹는 음식: 피자, 치킨 \n", fp);
	fputs("#취미: 영화, 게임", fp);

	fclose(fp);
	return 0;
}
