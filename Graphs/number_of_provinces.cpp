#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adjLs[], int vis[]){
	vis[node]=1;
	for(auto it: adjLs[node]){
		if(!vis[it]){
			dfs(it,adjLs,vis);
		}
	}
}


int numProvinces(vector<vector<int>> adj, int V){
	vector<int> adjLs[V];

	//to change adjacency matrix to list
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(adj[i][j]==1 && i!=j){
				adjLs[i].push_back(j);
				//adjLs[j].push_back(i);
			}
		}
	}


	

    int vis[V+1]={0};

    int cnt = 0;
    for(int i=0;i<V;i++){
    	if(!vis[i]){
    		cnt++;
    		dfs(i,adjLs,vis);
    	}
    }

    for(int i=0;i<V;i++){
    	cout<<i<<":";
		for(int j=0;j<adjLs[i].size();j++){

			cout<<adjLs[i][j]<<" ";
		}
		cout<<"\n";
	}






}

int main(int argc, char const *argv[])
{

	vector<vector<int>> adj;    //[[1 ,0 ,1],[0, 1, 0],[1,0,1]]
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		vector<int> row;
		for(int j=1;j<=n;j++){
			int e;
			cin>>e;
			row.push_back(e);
		}

		adj.push_back(row);
	}

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<adj[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }

	cout<<numProvinces(adj,n);
 	
	return 0;
}