#include <stdio.h>

int main(void)
{
	FILE * fp1 = fopen("res.txt", "rb");
	FILE * fp2 = fopen("des1.txt", "wb");
	char buf[30];
	int cnt;

	while(1)
	{
		cnt = fread(buf, 1, sizeof(buf), fp1);
		if(cnt < sizeof(buf))
		{
			fwrite(buf, 1, cnt, fp2);
			break;
		}
		fwrite(buf, 1, cnt, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}
