#include<bits/stdc++.h>
using namespace std;
int main(){
	long long c,y,k,x,i,j,n,l;
	cin>>n;
	vector<long long>v;
	string s;
	j=-1;
	y=0;
	c=0;
	for(i=0;i<(2*n);i++){
		cin>>s;
		if(s[0]=='a'){
			cin>>x;
			v.push_back(x);
		}
		else{
			y++;
			if(v.empty()){
				//y++;
				continue;
			}
			l=v.back();
			if(l==y){
				//y++;
				v.pop_back();
				continue;
			}
			v.clear();
			c++;

		}
		//cout<<c<<"\n";
	}	
	cout<<c<<"\n";
}