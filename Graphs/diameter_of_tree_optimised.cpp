#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];

int depth[N];

void dfs(int vertex,int parent=0){

	for(auto child:g[vertex]){
		if(child==parent) continue;
		depth[child]=depth[vertex]+1;
		dfs(child,vertex);
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
	int index;
	int m=INT_MIN;
	for(int i=1;i<=n;i++){
		if(depth[i]>m){
			m=depth[i];
			index=i;
		}
	}
	for(int i=1;i<=n;i++) depth[i]=0;
	dfs(index,0);
    
    m=INT_MIN;
    for(int i=1;i<=n;i++){
    	m=max(m,depth[i]);
    }

    cout<<m;

	// cout<<index;
	return 0;
}