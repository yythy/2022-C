#include <stdio.h>
int main()
{
    printf("�п�J�褸�~�G");
    int x;
    scanf("%d",&x);
    if (x%400 == 0) printf("�|�~");
    else if (x%100 == 0) printf("���~");
    else if (x%4 == 0) printf("�|�~");
    else printf("���~");


}





