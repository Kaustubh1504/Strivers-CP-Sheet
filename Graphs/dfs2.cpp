#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex){
	// take action on vertex after entering the vertex

	vis[vertex]=true;
    cout<<vertex<<endl;
	for(auto child: g[vertex]){

		cout<<"parent "<<vertex<<" child "<<child<<endl;
		if(vis[child]==true) continue;
		//take action on child before entering the child node
		dfs(child);
		//take action on child before exiting child node
	}

	//take action on vertex before exiting vertex
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

	dfs(3);
	return 0;
}