#include <stdio.h>
int main()
{
    int a = 10;
    printf("a在哪裡? %d\n",&a);

    int *p = &a;

    printf("指標P的數值是&a,==%d\n",p);

    printf("指標P的值還是&a,==%d\n",*p);
}
