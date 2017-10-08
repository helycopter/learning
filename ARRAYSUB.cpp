#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,x,i,j;
	vector<long long>v;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	cin>>k;
	deque<long long>q;
	for(i=0;i<k;i++){
		while(!q.empty() && v[q.back()]<=v[i]){
			q.pop_back();
		}
		q.push_back(i);
	}
	for(;i<n;i++){
		cout<<v[q.front()]<<" ";
		while(!q.empty() && q.front()<=(i-k)){
			q.pop_front();
		}
		while(!q.empty() && v[q.back()]<=v[i]){
			q.pop_back();
		}
		q.push_back(i);
	}
	cout<<v[q.front()]<<"\n";
}