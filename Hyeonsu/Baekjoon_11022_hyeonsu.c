#include <stdio.h>

int main(void)
{
    int A = 0, B = 0, i = 0, j = 0;

    printf("몇번 덧셈을 수행 : ");
    scanf_s("%d", &i);

    for (j = 1; j <= i; j++)
    {
        printf("두 정수 입력하기 : ");
        scanf_s("%d %d", &A, &B);

        printf("Case #%d: %d + %d = %d\n", j, A, B, A + B);
    }
}