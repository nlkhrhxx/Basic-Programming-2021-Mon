#include <stdio.h>

int main(void)
{
    int n = 0, i = 0, hap = 0;

    printf("n까지 합 구하기(n입력) : ");
    scanf_s("%d", &n);

    for (i = 0; i <= n; i++)
        hap = hap + i;

    printf("%d", hap);
    
    getch();

}

