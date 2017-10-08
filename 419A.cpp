#include<bits/stdc++.h>
using namespace std;
long long tim[25];
int main(){
	tim[1]=10;
	tim[2]=20;
	tim[3]=30;
	tim[4]=40;
	tim[5]=50;
	tim[10]=1;
	tim[11]=11;
	tim[12]=21;
	tim[13]=31;
	tim[14]=41;
	tim[15]=51;
	tim[20]=2;
	tim[21]=12;
	tim[22]=22;
	tim[23]=32;
	string s;
	long long i,j,c,d,ct=0,ans;
	cin>>s;
	if(s[0]==s[4] && s[1]==s[3]){
		cout<<"0\n";
		return 0;
	}
	c=(s[0]-'0')*10+s[1]-'0';
	d=(s[3]-'0')*10+s[4]-'0';

	//cout<<c<<" "<<d<<" "<<tim[c]<<"\n";
	if(tim[c]>=d && tim[c]!=0){
		cout<<(tim[c]-d)<<"\n";
		return 0;
	}
	if(c==23){
		cout<<(60-d)<<"\n";
		return 0;
	}
	for(i=c+1;i<24;i++){
		ct++;
		if(tim[i]!=0){
			break;
		}

	}
	ans=60-d+(ct-1)*60+tim[i];
	cout<<ans<<"\n";


}