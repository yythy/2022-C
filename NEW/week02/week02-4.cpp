//#include <stdio.h>
#include <iostream>
int main()
{
	long long int a,b;
	while(std::cin >> a >> b ){
//	while( scanf("%lld%lld",&a,&b)==2){
		long long int ans=a-b;
		if(ans<0) ans=b-a;
		//printf("%lld\n",ans);
		std::cout<<ans<<std::endl;
	}



}
