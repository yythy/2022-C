#include <stdio.h>
int main()
{
	for(int X=1;X<=9;X++){
		for(int Y=1;Y<=9;Y++){
			printf("%d*%d=%2d ",Y,X,X*Y);
		}
		printf("\n");
	}
}
