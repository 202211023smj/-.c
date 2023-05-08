#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    printf("x,y 좌표를 입력하시오: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1사분면 입니다");
    else if (x < 0 && y > 0)
        printf("2사분면 입니다");
    else if (x < 0 && y < 0)
        printf("3사분면 입니다");
    else if (x > 0 && y < 0)
        printf("4사분면 입니다");
    else
        printf("원점");

    return 0;
}