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
int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	ll x,a,b,ans,xx,yy;
	sc(x);sc(a);sc(b);
	xx=abs(x-a);
	yy=abs(x-b);
	ans=min(xx,yy);
	if(ans==xx)printf("A\n");
	else printf("B\n");	
}