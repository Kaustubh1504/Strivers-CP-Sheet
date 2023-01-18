#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];

int diameter[N];
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
	int d=INT_MIN;
	for(int i=1;i<=n;i++){
		// diameter[i]=dfs(i,0);
		dfs(i,0);
		for(int j=1;j<=n;j++){
			diameter[i]=max(diameter[i],depth[j]);
		}

		for(int j=1;j<=n;j++){depth[j]=0;}

	}

	for(int j=1;j<=n;j++){
			d=max(diameter[j],d);
	}

	cout<<d;
	return 0;
}