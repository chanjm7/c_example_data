#include <stdio.h>

long GetFileSizeOfByte(FILE * fp)
{
	long fpos, fsize;
	fpos = ftell(fp);
	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}

int main(void)
{
	FILE * fp = fopen("text.txt", "wt");
	char ch;
	fputs("1234567890", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");
	putchar(fgetc(fp));
	printf("\n");
	printf("%d \n", GetFileSizeOfByte(fp));

	putchar(fgetc(fp));
	printf("\n");
	printf("%d \n", GetFileSizeOfByte(fp));

	putchar(fgetc(fp));
	printf("\n");
	printf("%d \n", GetFileSizeOfByte(fp));

	putchar(fgetc(fp));
	printf("\n");
	printf("%d \n", GetFileSizeOfByte(fp));
	fclose(fp);
	return 0;
}
