#include <stdio.h>
int main()
{
    int a=99,b=33;
    printf("%d %d\n",a,b);

    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d %d\n",a,b);


}
