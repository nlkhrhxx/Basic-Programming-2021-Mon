#include <stdio.h>

int main()
{
	int A, B;
	1 <= A;
	A <= 10000;
	1 <= B;
	B <= 10000;
	
	printf("사칙연산할 두 정수 입력 : ");
	scanf_s("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);
}