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
	int n,k;
	cin>>n>>k;

	for(int i=1;i<=n;i++){
		make(i);
	}

	while(k--){
		int u,v;
		cin>>u>>v;
		Union(u,v);

	}

	int connected_com = 0;

	for(int i=1;i<=n;i++){
		if(find(i)==i) connected_com++;
	}
	cout<<connected_com;
	return 0;
}