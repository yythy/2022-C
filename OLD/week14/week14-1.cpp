#include <stdio.h>
int a=10;
void func()
{
    a=30;
    printf("func()�� a�令:%d\n",a);
}
int main()
{
    printf("main()�� a:%d\n",a);
    func();
    printf("main()�� a�令:%d\n",a);
}
