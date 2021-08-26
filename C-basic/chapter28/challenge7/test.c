#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE * fp1 = fopen("d1.txt", "rb");
	FILE * fp2 = fopen("d2.txt", "wb");
	char buf [30];
	int readCnt;

	while(1)
	{
		readCnt = fread((void *)buf, 1, sizeof(buf), fp1);

		if(readCnt < sizeof(buf))
		{
			fwrite((void *)buf, 1, readCnt, fp2);
			break;
		}
		fwrite((void *)buf, 1, sizeof(buf), fp2);
	}


	fclose(fp1);
	fclose(fp2);
	return 0;
}
