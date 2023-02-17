#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int sp =5-i;
        int st =i*2-1;
        for (int k=0;k<sp;k++){
            printf(" ");
        }
        for (int k=0;k<st;k++){
            printf("*");
    }
    printf("%d¼Ó,%dªÅ®æ,%d¬P\n",i,sp,st);
}
}
