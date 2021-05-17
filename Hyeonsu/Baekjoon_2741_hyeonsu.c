#include <stdio.h>

int main(void)
{
    int N = 0, i = 0;

    printf("N 입력 (단, 십만보다 작은수) : ");
    scanf_s("%d", &N);

    for (i = 1; i <= N; i++)
        printf("%d\n", i);
}