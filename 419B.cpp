#include<bits/stdc++.h>
using namespace std;
long long dp[300000];
long long ans[300000];
int main(){
	long long l,r,n,k,q,i,j;
	cin>>n>>k>>q;
	for(i=1;i<=n;i++){
		cin>>l>>r;
		dp[l]++;
		dp[r+1]--;
	}
	for(i=1;i<300000;i++){
		dp[i]+=dp[i-1];
	}
	for(i=0;i<300000;i++){
		if(dp[i]>=k){
			ans[i]++;
		}
	}
	for(i=0;i<300000;i++){
		ans[i]+=ans[i-1];
	}
	for(i=0;i<q;i++){
		cin>>l>>r;
		cout<<(ans[r]-ans[l-1])<<"\n";
	}

}