#include<bits/stdc++.h>
using namespace std;

const int N=1e6;
vector<int> g[N];
bool vis[N];
int depth[N];

void dfs(int v){
	vis[v]=true;

	for(auto child: g[v]){
		if(vis[child]==true) continue;
		depth[child]=depth[v]+1;
		dfs(child);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for(int i=1;i<=n-1;i++){
	   int x,y;
	   cin>>x>>y;
	   g[x].push_back(y);
	   g[y].push_back(x);
	}
    dfs(1);
	// for(int i=1;i<=n;i++){
	//    cout<<depth[i]<<" ";
	// }
	int mx=INT_MIN;
	int v=0;
	for(int i=1;i<=n;i++){
		if(depth[i]>mx){
			mx=depth[i];
			v=i;
		}
	}
	for(int i=1;i<=n;i++){ 
		depth[i]=0;
		vis[i]=false;
	}
    
	dfs(v);
	mx=INT_MIN;
	for(int i=1;i<=n;i++){
		mx=max(mx,depth[i]);
	}

	cout<<3*mx;
	return 0;
}