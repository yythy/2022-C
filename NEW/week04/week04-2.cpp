#include <stdio.h>
int main()
{
    int a = 10;
    printf("a�b����? %d\n",&a);

    int *p = &a;

    printf("����P���ƭȬO&a,==%d\n",p);

    printf("����P�����٬O&a,==%d\n",*p);
}
