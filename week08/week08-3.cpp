#include <stdio.h>
int main()
{
    printf("判斷數字是不是可憐可悲沒人要的質數：");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2 ;i<n;i++){
        if(n%i==0) bad=1;
    }
    if (bad==0)printf("%d是個值數",n);
    else printf("%d不是質數",n);

}
