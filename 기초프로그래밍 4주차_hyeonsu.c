#include <stdio.h>

void divide( double dividend, double divisor, double num)
{
	num = dividend / divisor;
	if (divisor == 0) {
		printf("Error");
		return 0;
	}
	else {
		num = dividend / divisor;
	}
}
int main(void)
{
	double num1, dend, sor;
	num1 = 0;
	printf("===== (1)Divide =====\n");
	printf("Input dividend, divisor: ");
	scanf_s("%lf %lf", &dend, &sor);
	printf("Divide(dividend, divisor) = %lf",num1);
	divide(dend, sor, num1);

}