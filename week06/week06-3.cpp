#include <stdio.h>
int main()
{
    printf("�п�J��Ӽ�:");
    int a,b,C;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) C=i;
    }
    printf("���Ans:%d",C);
}

