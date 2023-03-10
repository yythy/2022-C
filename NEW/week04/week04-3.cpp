#include <stdio.h>
int main()
{
    int a=10,b=20;

    int *p1 = &a;
    int *p2 = &b;

    printf("p1跑计琌%d\n",*p1);
    printf("p2跑计琌%d\n",*p2);

    p1 = p2;

    printf("p1跑计琌%d\n",*p1);
    printf("p2跑计琌%d\n",*p2);


}
