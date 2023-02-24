#include <stdio.h>
int main()
{
	long long int a,b;

	while( scanf("%lld%lld",&a,&b)==2){
		long long int ans;
		if(a>b) ans=a-b;
		else ans=b-a;
		printf("%lld\n",ans);
	}



}

