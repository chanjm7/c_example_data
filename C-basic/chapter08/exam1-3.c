#include <stdio.h>

int main(void)
{
	int korean, english, math, ave;
	printf("국어, 영어, 수학 점수 순으로 입력: ");
	scanf("%d %d %d", &korean, &english, &math);

	ave = (korean + english + math) / 3.0;

	if(ave>90)
		printf("A \n");
	else if(ave>80)
		printf("B \n");
	else if(ave>70)
		printf("C \n");
	else if(ave>50)
		printf("D \n");
	else
		printf("F \n");
	return 0;

}
