#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个四位数：");
    scanf("%d", &a);
    printf("%d的千位是:%d ", a, a % 10);
    printf("百位是:%d ", a / 10 % 10);
    printf("十位是:%d ", a / 100 % 10);
    printf("个位是:%d\n", a / 1000);
    return 0;
}