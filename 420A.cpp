#include<bits/stdc++.h>
using namespace std;
long long a[100][100];
int main(){
	long long l,k,n,i,j,f=0,ff=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]==1){
				continue;
			}
			ff=0;
			for(k=1;k<=n;k++){
				for(l=1;l<=n;l++){
					if((a[i][k]+a[l][j])==a[i][j]){
						ff=1;
						break;
					}
				}
				if(ff)break;
			}
			if(ff==0){f=1;break;}
		}
		if(f)break;
	}
	if(f)cout<<"No\n";
	else{cout<<"Yes\n";}
}