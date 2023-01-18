#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];

int sumSubTree[N];
int valueArray[N];
void dfs(int vertex,int parent=-1){

	sumSubTree[vertex]+=valueArray[vertex];
	for(auto child:g[vertex]){
		if(child==parent) continue;
		dfs(child,vertex);
		sumSubTree[vertex]+=sumSubTree[child];
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++) cin>>valueArray[i];

	for(int i=0;i<n-1;i++){
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);

	}

	dfs(1);

	for(int i=1;i<=n;i++) cout<<sumSubTree[i]<<" ";
	cout<<endl;
	int total=sumSubTree[1];
	int m=INT_MIN;
	for(int i=2;i<=n;i++){
		int firsttotal=sumSubTree[i];
		int secondtotal=total-firsttotal;

		m=max(m,firsttotal*secondtotal);
	}

	cout<<m;
	return 0;
}