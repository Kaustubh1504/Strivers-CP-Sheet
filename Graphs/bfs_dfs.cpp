//bfs
vector<int> bfsofGraph(int V,vector<int> adj []){
	int vis[n]={0};
	vis[0]=1;
	queue<int> q;
	q.push(0);

	vector<int> bfs;

	while(!q.empty()){
		int node= q.front();
		q.pop();
		bfs.push_back(node);

		for(auto it: adj[node]){
			if(!vis[it]){
				vis[it]=1;
				q.push(it)
			}
		}
	}

	return bfs;
}

//dfs
void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls){
	vis[node]=1;
	ls.push_back(node);
	//traverse all its neighboures;

	for(auto it: adj[node]){
		if(!vis[it]){
			dfs(it,adj,vis,ls);
		}
	}
}
vector<int> dfsOfGraph(int V,vector<int> adj[]){
	int vis[n]={0};
	int start=0;
	vector<int> ls;
	dfs(start,adj,vis,ls);
}
