#include <stdio.h>
int main()
{
    printf("請輸入西元年：");
    int x;
    scanf("%d",&x);
    if (x%400 == 0) printf("閏年");
    else if (x%100 == 0) printf("平年");
    else if (x%4 == 0) printf("閏年");
    else printf("平年");


}





