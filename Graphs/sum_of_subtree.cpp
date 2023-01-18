#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];

int sumSubTree[N];                    
int valueArr[N];
int evenNoInSubT[N];
void dfs(int vertex,int parent){

	sumSubTree[vertex]+=vertex;
	if(vertex%2==0) evenNoInSubT[vertex]++;

	for(auto child:g[vertex]){
		if(child==parent) continue;

		dfs(child,vertex);
		sumSubTree[vertex]=sumSubTree[vertex]+sumSubTree[child];
		evenNoInSubT[vertex]=evenNoInSubT[vertex]+evenNoInSubT[child];
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
	for(int i=1;i<=n;i++) cout<<sumSubTree[i]<<" ";
	cout<<endl;

    for(int i=1;i<=n;i++) cout<<evenNoInSubT[i]<<" ";
	cout<<endl;
	return 0;
}