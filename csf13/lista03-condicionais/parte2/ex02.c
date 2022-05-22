#include<stdio.h>
#include<math.h>

int main(void)
{
	char	flag;
	double	medPond;
	double	medAri;
	double	medGeo;
	double	medArm;
	double	num1;
	double	num2;
	double	num3;
	double	temp;

	scanf("%c%lf%lf%lf", &flag, &num1, &num2, &num3);
	temp = num1*num2*num3;
	medPond = ((num1*1)+(num2*2)+(num3*3)) / 6;
	medAri = num1+num2+num3 / 3;
	medGeo = pow(temp,1/3.0);
	medArm = 3/((1/num1) + (1/num2) + (1/num3));
	if(flag == 'A')
		printf("%lf\n", medAri);
	else if (flag == 'P')
		printf("%lf\n", medPond);
	else if (flag == 'G')
		printf("%lf\n", medGeo);
	else if (flag == 'H')
		printf("%lf\n", medArm);
	return(0);
}
