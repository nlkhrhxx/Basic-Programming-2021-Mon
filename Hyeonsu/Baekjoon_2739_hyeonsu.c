// 구구단
#include <stdio.h>

int main(void)
{
	int n;
	printf("실행할 N단을 입력하세요(단, 1 < n < 9) : ");
	scanf_s("%d", &n);
	printf("\n");

	for (int i = 1; i <= 9; i++)
		printf("%d x % d = %d\n", n, i, n * i);
	return 0;

}