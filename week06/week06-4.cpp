#include <stdio.h>
int main()
{
    printf("�п�J��Ӽ�:");
    int a,b,C;
    scanf("%d %d",&a,&b);

    while(1){
        C = a%b;
        printf("a:%d b:%d c:%d");
        if( C==0 ) break;
        a = b;
        b = C;
    }
    printf("�����O:%d",b);
}
