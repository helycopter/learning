#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,n,i,j,x,s=0;
	map<long long ,long long>mp;
	map<long long,long long>::iterator it;
	cin>>a>>b>>c;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		mp[x]++;

	}
	for(it=mp.begin();it!=mp.end();it++){
		if(((it->first)<=b) || ((it->first)>=c)){

		}
		else{
			s+=(it->second);
		}
	}
	cout<<s<<"\n";
}