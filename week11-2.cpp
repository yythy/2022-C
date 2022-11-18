#include <stdio.h>
int main()
{
    int a=90,b=85,c=70,temp;
    printf("O:%d %d %d\n",a,b,c);

    if (a>b){
        temp=a;
        a=b;
        b=temp;
    }

    if (b>c){
        temp=b;
        b=c;
        c=temp;
    }


    if (a>b){
        temp=a;
        a=b;
        b=temp;
    }


    printf("C:%d %d %d\n",a,b,c);

}

