#include <stdio.h>
#include <stdlib.h>

int a[10] = {9,5,8,0,2,6,1,7,4,3};
int compare(const void *p1,const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}
int main()
{
    qsort(a, 10, sizeof(int), compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }


}
