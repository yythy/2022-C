#include <stdio.h>
int main()
{
    int a=50,b=55,temp;
    printf("O:%d %d\n",a,b);

    if (b>a){
        temp=a;
        a=b;
        b=temp;
    }
    printf("C:%d %d",a,b);

}

