#include <stdio.h>
int main()
{
    printf("�P�_�Ʀr�O���O�i���i�d�S�H�n����ơG");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2 ;i<n;i++){
        if(n%i==0) bad=1;
    }
    if (bad==0)printf("%d�O�ӭȼ�",n);
    else printf("%d���O���",n);

}
