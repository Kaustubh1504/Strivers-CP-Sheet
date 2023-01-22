#include<bits/stdc++.h>
using namespace std;
int parent[100];
int size_n[100];
multiset<int> sizes;
void make(int v){
	parent[v]=v;
	size_n[v]=1;
	sizes.insert(1);
}

int find(int v){ //returns the parent of the node
	if(v==parent[v]) return v;
	return parent[v]=find(parent[v]);
}

void merge(int a,int b){
	sizes.erase(find(size_n[a]));
	sizes.erase(find(size_n[b]));

	sizes.insert(size_n[a]+size_n[b]);
}

int Union(int a,int b){
	a=find(a);
	b=find(b);

	if(a!=b){
		if(size_n[a]<size_n[b]){
			swap(a,b);
		}

		parent[b]=a;
		merge(a,b);
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

		if(sizes.size()==1) cout<<0<<endl;
		else{
			int mi=*(sizes.begin());
			int mx=*(--sizes.end());

			cout<<mx-mi<<endl;
		}

	}

	return 0;
}