#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];

int parent[N];

void dfs(int vertex,int par=-1){

	parent[vertex]=par;
	for(auto child: g[vertex]){
		if(child==par) continue;
		dfs(child,vertex);
	}
}

vector<int> path(int vertex){
	vector<int> ans;
	while(vertex!=-1){
		ans.push_back(vertex);
		vertex=parent[vertex];
	}
	reverse(ans.begin(),ans.end());
	return ans;
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

	dfs(1);

	int x,y;
    
    x=7;
    y=5;
	vector<int> path_x= path(x);
	vector<int> path_y= path(y);


	// for(int i=0;i<path_x.size();i++) cout<<path_x[i]<<" ";
	// cout<<endl;
	
	// for(int i=0;i<path_y.size();i++) cout<<path_y[i]<<" ";
	// cout<<endl;

	for(int i=1;i<=n;i++) cout<<i<<":"<<parent[i]<<" ";
	cout<<endl;


	int min_len = min(path_x.size(),path_y.size());
	int lca = -1;

	for(int i=0;i<min_len;i++){
		if(path_x[i]!=path_y[i]) break;
		else lca=path_x[i];
	}

	cout<<lca;


	return 0;
}