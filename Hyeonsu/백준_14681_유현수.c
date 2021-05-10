#include <stdio.h>

int main()
{
	int a, b;
	-1000 <= a;
	a <= 1000;
	a != 0;
	-1000 <= b;
	b <= 1000;
	b != 0;

	printf("몇 사분면인지 판별할 숫자를 입력  : ");
	scanf_s("%d %d", &a, &b);

	if (a > 0 && b > 0)
		printf("1");
	else if (a < 0 && b > 0)
		printf("2");
	else if (a < 0 && b < 0)
		printf("3");
	else if (a > 0 && b < 0)
		printf("4");
}