#include <stdio.h>
int main()
{
    int a[10] = {9,5,8,0,2,6,1,7,4,3};

    for(int k=0;k<10-1;k++){
        for(int i=0;i<10-1;i++){
            if( a[i] > a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1]=temp;
        }

        }



    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    printf("\n");
    }



}
