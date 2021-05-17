// º° Âï±â - 1
#include <stdio.h>

int main(void)
{
    int n = 0, star = 0;

    printf("별 찍기 (단, 1~100): ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int star = 0; star <= i; star++)
        {
            printf("*");
        }
        printf("\n");
    } 

}
