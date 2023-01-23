#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
int level[N];
int depth[N];

// void bfs(int source){
// 	queue<int> q;
// 	q.push(source);
// 	vis[source]=true;

// 	while(!q.empty()){
// 		int cur=q.front();
// 		q.pop();

// 		for(auto child : g[cur]){
// 			if(vis[child]==true) continue;
// 			q.push(child);
// 			vis[child]=true;
// 			level[child]=level[cur]+1;
// 		}
// 	}

// }

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
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		// if(x==-1){
		//   g[i].push_back(0);
		//   g[0].push_back(i);
		// }else{
		//   g[i].push_back(x);
		//   g[x].push_back(i);

		// }

		if(x!=-1){
			g[x].push_back(i);
			//g[x].push_back(i);

		}
	}
	// bfs(1);
	for(int i=1;i<=n;i++){
		if(vis[i]==false){
			dfs(i);
		}
	}
	int mx=INT_MIN;
	// for(int i=1;i<=n;i++) cout<<depth[i]<<" ";
	// cout<<endl;
	for(int i=1;i<=n;i++) mx=max(mx,depth[i]);
	cout<<mx+1;
	return 0;
}