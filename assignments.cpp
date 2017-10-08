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
const int N=21,mod = 1e9+7;
int  n,v[N][N];
int dp[1ll<<N][21];
int go(ll mask,ll i){
	if(mask==(1<<n)-1)return 1;
	if(i>n)return 0;
	if(dp[mask][i]!=-1)return dp[mask][i];
	ll j,ans,x;
	ans=go(mask,i+1);
	for(j=0;j<n;j++){
		x=v[j][i];
		if(mask&(1ll<<j) || x==0)continue;
		ans+=go(mask|(1ll<<j),i+1);
	}
	dp[mask][i]=ans;
	return ans;
}
int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	int t,i,j,x,y,ans;
	//sc(t);
	scanf("%d",&t);
	while(t--){
		//for(i=0;i<N;i++)v[i].clear();
		//sc(n);
		scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=1;j<=n;j++){
				scanf("%d",&v[i][j]);
				//sc(v[i][j]);
				//if(x)v[j+1].pb(i);
			}
		}
		//y=(1ll<<n);
		//for(i=0;i<y;i++)for(j=0;j<21;j++)dp[i][j]=-1;
		memset(dp,-1,sizeof(dp));
		x=go(0,1);
		//pr(x);
		printf("%d\n",x);
	}
}