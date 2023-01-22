#include<bits/stdc++.h>
using namespace std;
int parent[100];
int size_n[100];
void make(int v){
	parent[v]=v;
	size_n[v]=1;
}

int find(int v){ //returns the parent of the node
	if(v==parent[v]) return v;
	return parent[v]=find(parent[v]);
}

int Union(int a,int b){
	a=find(a);
	b=find(b);

	if(a!=b){
		if(size_n[a]<size_n[b]){
			swap(a,b);
		}

		parent[b]=a;
		size_n[a]+=size_n[b];
	}
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	vector<pair<int,pair<int,int>>> edges;
	for(int i=0;i<m;i++){
		int u,v,wt;
		cin>>u>>v>>wt;

		edges.push_back({wt,{u,v}});

	}
	//sort all the weights of the graph
	sort(edges.begin(),edges.end());
  	
  	//create all the edges with no weight
  	for(int i=1;i<=n;i++) make(i);

  	int totalcost=0;

    for(auto &edge : edges){
    	int w = edge.first;
    	int u = edge.second.first;
    	int v = edge.second.second;

    	if(find(u)==find(v)) continue;

    	Union(u,v);
    	totalcost+=w;
    	cout<<u<<" "<<v<<endl;

    }
    cout<<totalcost;

	return 0;
}