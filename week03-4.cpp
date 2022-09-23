#include <stdio.h>
int main()
{
    printf("請輸入1個數字");

    int a;
    scanf("%d",&a);
    if(a%2 == 0)printf("even");
    else printf("odd");
}
