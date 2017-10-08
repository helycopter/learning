#include<bits/stdc++.h>
using namespace std;
int main(){
	long long i,j,n;
	cin>>n;
	vector<long long>v(n);
	for(i=0;i<n;i++)cin>>v[i];
	long long minn=1e9,maxx=-1,mini=-1,maxi=-1,l=-1;
	for(i=0;i<n;i++){
		if(v[i]>=maxx){
			maxi++;
			maxx=v[i];
		}
		if(v[i]<=minn){
			mini++;
			minn=v[i];
		}
		//cout<<i<<" "<<" "<<maxi<<" "<<min<<" "<<l<<"\n";
		if((maxx-minn)<=1)l=max(l,abs(maxi-mini)+1);
		cout<<i<<" "<<maxi<<" "<<mini<<" "<<l<<"\n";
	}
	cout<<l<<"\n";
}