#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
bool dfs(int vertex,int par){
	// take action on vertex after entering the vertex

	vis[vertex]=true;
    //cout<<vertex<<endl;
    bool isLoopExists=false;
	for(auto child: g[vertex]){

		//cout<<"parent "<<vertex<<" child "<<child<<endl;
		if(vis[child]==true && child==par) continue;
		if(vis[child]==true) return true;
		//take action on child before entering the child node
		isLoopExists|=dfs(child,vertex);
		//take action on child before exiting child node
	}

	//take action on vertex before exiting vertex

	return isLoopExists;
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++){
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}

	// dfs(3);
	bool isLoopExists=false;

	for(int i=0;i<=n;i++){
		if(vis[i]) continue;

		if(dfs(i,0)==true){
			isLoopExists=true;
			break;
		}
	}

	cout<<isLoopExists;
	return 0;
}