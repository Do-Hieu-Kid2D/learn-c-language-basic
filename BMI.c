// BMI < 20 Lower than normal weight
// 20 <= BMI <= 25 Normal weight
// 25 < BMI <= 30 Overweight
// 30 < BMI <= 40 Obese
// 40 < BMI Extremely obese
#include <stdio.h>
int main(void)
{

	float CanNang, ChieuCao;

	printf("moi nhap canNang(kg):");
	scanf("%f", &CanNang);
	printf("\nmoi nhap Chieucao(met) [ex:160cm = 1.60m] : ");
	scanf("%f", &ChieuCao);
	float bmi = CanNang / (ChieuCao * ChieuCao);
	printf(" voi can nang = %.1lfkg va chieu cao = %.2lfm\n", CanNang, ChieuCao);
	printf("Gia tri BMI co the ban = %f\n", bmi);

	if (bmi < 20)
	{
		printf("\nLower than normal weight");
	}
	else if (20 <= bmi <= 25)
	{
		printf("\nNormal weight");
	}
	else if (25 < bmi && bmi <= 30)
	{
		printf("\nOverweight");
	}
	else if (30 < bmi && bmi <= 40)
	{
		printf("\nObese");
	}
	else
	{
		printf("\nExtremely obese");
	}
	printf("\n");
	return 0;
}
