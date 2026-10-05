#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


t1()
{
    double a;//ввод
    scanf("%lf", &a);
    printf("%d", (int)a);
}

int dz()
{
    setlocale(LC_CTYPE, "RUS");
    int A, B;
    printf("Введите первое число:\n");
    scanf("%d", &A);
    printf("Введите второе число:\n");
    scanf("%d", &B);

    if ((A % 2 == 0) ^ (B % 2 == 0))
        printf("Налево");
    else printf("Направо");
}

main()
{
    dz();
}