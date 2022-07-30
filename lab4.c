#include<stdio.h>

int f1()
{
    printf("computer");
    return 1;
}
int f2()
{
    printf("science");
    return 1;
}
int main()
{
    int p=f1() + f2();
    return 0;
}