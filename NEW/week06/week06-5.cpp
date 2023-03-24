#include <stdio.h>
#include <algorithm>
int a[10] = {9,5,8,0,2,6,1,7,4,3};
int main()
{
    std::sort(a,a+10);

    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }


}

