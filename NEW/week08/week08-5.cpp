#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int space=n-i;
		int star=2*i-1;
		for(int j=1;j<=space;j++){
			printf(" ");
		}
		for(int j=1;j<=star;j++){
			printf("*");
		}
		printf("\n");
	}



}
