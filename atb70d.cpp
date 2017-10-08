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
vpii v[N];
bool b[N];
ll dist[N];
void dfs(ll s){
	b[s]=true;
	ll i,j,x,y;
	for(i=0;i<v[s].size();i++){
		x=v[s][i].ff;y=v[s][i].ss;
		if(!b[x]){
			dist[x]=dist[s]+y;
			dfs(x);
		}

	}
}
int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	ll i,j,x,y,a,b,c,n,q,k;
	sc(n);
	for(i=1;i<n;i++){
		sc(a);sc(b);sc(c);
		v[a].pb(mp(b,c));
		v[b].pb(mp(a,c));
	}
	sc(q);sc(k);
	dfs(k);
	while(q--){
		sc(x);sc(y);
		a=dist[x]+dist[y];
		pr(a);
	}
}