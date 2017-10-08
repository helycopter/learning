#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld\n",x)
#define clr(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
typedef pair<ll, ll> pii;
typedef vector< ll > vl;
typedef vector< pii > vpii;
const ll N= 1e5+55,mod = 1e9+7;
string s[11];
int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	ll i,j,l,k,n,m,a,b,c,d,x,y,z,f=0;
	for(i=1;i<=10;i++){
		cin>>s[i];
		s[i]='#'+s[i];
	}
	for(i=1;i<=10;i++){
		for(j=1;j<=6;j++){
			a=0;b=0;
			for(k=j;k<=k+4;k++){
				if(s[i][k]=='X')a++;
				else if(s[i][k]=='.')b++;
			}
			if(a==4 && b==1){f=1;break;}
		}
		if(f)break;
	}
	if(f){cout<<"YES\n";return 0;}
	for(i=1;i<=10;i++){
		for(j=1;j<=6;j++){
			a=0;b=0;
			for(k=j;k<=k+4;k++){
				if(s[k][i]=='X')a++;
				else if(s[k][i]=='.') b++;
			}
			if(a==4 && b==1){f=1;break;}
		}
		if(f)break;
	}
	if(f){cout<<"YES\n";return 0;}
	for(i=1;i<=6;i++){
		a=0;b=0;
		for(j=i;j<=i+4;j++){
			if(s[j][j]=='X')a++;
			else if(s[j][j]=='.')b++;
		}
		if(a==4 && b==1){f=1;break;}
		if(f)break;
	}
	if(f){cout<<"YES\n";return 0;};
	for(i=1;i<=6;i++){
		l=i;
		a=0;b=0;
		for(j=10-i+1;j>=(7-i);j++){
			if(s[l][j]=='X')a++;
			else if(s[l][j]=='.')b++;
			l++;
		}
		if(a==4 && b==1){f=1;break;}
		if(f)break;
	}
	if(f){cout<<"YES\n";return 0;};
	cout<<"NO\n";
}