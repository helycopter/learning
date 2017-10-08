#include<bits/stdc++.h>
using namespace std;
int main(){
	long long s,x,m,b,i,j,k,ans=-1;
	cin>>m>>b;
	for(i=0;i<=b;i++){
		x=m*(b-i);
		s=x*(x+1)/2;
		s=s*(i+1);
		s+=(x+1)*(i*(i+1)/2);
		ans=max(ans,s);

	}
	cout<<ans<<"\n";

}