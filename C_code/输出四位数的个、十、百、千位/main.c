#include <stdio.h>
int main()
{
    int a;
    printf("������һ����λ����");
    scanf("%d", &a);
    printf("%d��ǧλ��:%d ", a, a % 10);
    printf("��λ��:%d ", a / 10 % 10);
    printf("ʮλ��:%d ", a / 100 % 10);
    printf("��λ��:%d\n", a / 1000);
    return 0;
}