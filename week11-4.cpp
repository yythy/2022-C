#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,38,20,10,0};

    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");


    for(int i=0;i<10-1;i++){
        if (a[i]>a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
                a[i+1] = temp;
                }
        }
    for(int i=0;i<10-1;i++){
        if (a[i]>a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
                a[i+1] = temp;
                }
        }
    for(int i=0;i<10-1;i++){
    if (a[i]>a[i+1]){
        int temp = a[i];
        a[i] = a[i+1];
            a[i+1] = temp;
            }
        }
    for(int i=0;i<10-1;i++){
        if (a[i]>a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
                a[i+1] = temp;
                }
        }

    for(int j=0;j<10;j++){
        printf("%d ",a[j]);
    }
    printf("\n");




}

