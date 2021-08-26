#include <stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);
int main(void)
{
	int sel;
	double temp;
	printf("1.섭씨를 화씨로  or 2.화씨를 섭씨로:  ");
	scanf("%d", &sel);
	printf("온도 입력: ");
	scanf("%lf", &temp);

	switch(sel)
	{
		case 1:
			printf("섭씨 %2f를 화씨로 바꾼 결과: %0.2f \n", temp, CelToFah(temp));
			break;
		case 2:
			printf("화씨 %2f를 섭씨로 바꾼 결과: %0.2f \n", temp, FahToCel(temp));
	}
	return 0;
}

double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}
