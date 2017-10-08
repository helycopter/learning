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
// i think i love a girl but .....
int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	ll a,b,c,d,x,y,ans;
	sc(a);sc(b);sc(c);sc(d);
	x=max(a,c);
	y=min(b,d);
	ans=y-x;
	if(ans>0){
		pr(ans);
		return 0;
	}
	printf("0\n");
}