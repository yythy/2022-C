#include <stdio.h>
int main()
{
    printf("耞计琌ぃ琌鸡磀⊿璶借计");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2 ;i<n;i++){
        if(n%i==0) bad=1;
    }
    if (bad==0)printf("%d琌计",n);
    else printf("%dぃ琌借计",n);

}
