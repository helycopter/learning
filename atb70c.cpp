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
// har baar muje hi sacrifice karna padhta h ....kaash mere paas hoti voh  
int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	ll x,y,n,i,j,ans,l;
	//sc(n);
	//sc(x);
	cin>>n;
	cin>>x;
	if(n==1){
		//pr(x);
		cout<<x<<"\n";
		return 0;
	}
	for(i=2;i<=n;i++){
		//sc(y);
		cin>>y;
		l=__gcd(x,y);
		/*if(x>=l){
			ans=x/l;
			ans*=y;
		}
		else{
			ans=y/l;
			ans*=x;
		}*/
		//ans=x*y/l;
		if(i!=n)
		x=l;
	}
	if(x>=l){
			ans=x/l;
			ans*=y;
		}
		else{
			ans=y/l;
			ans*=x;
		}
	cout<<ans<<"\n";
	//pr(ans);
}