// �� ��� - 1
#include <stdio.h>

int main(void)
{
    int n = 0, star = 0;

    printf("�� ��� (��, 1~100): ");
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