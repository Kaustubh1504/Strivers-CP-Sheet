#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];

int height[N];
int depth[N];


void dfs(int vertex,int par){

	for(auto child: g[vertex]){

		if(child==par) continue;
		depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for(int i=0;i<n-1;i++){
		int v1,v2;
		cin>>v1>>v2;

		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}

	dfs(1,0);

	for(int i=1;i<=n;i++){
		cout<<depth[i]<<" ";
	}
	cout<<"\n";
	for(int i=1;i<=n;i++){
		cout<<height[i]<<" ";
	}
   // depth[1]



	return 0;
}