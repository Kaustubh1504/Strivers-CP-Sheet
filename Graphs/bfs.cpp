#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];

bool vis[N];
int level[N];
void bfs(int source){
	queue<int> q;
	q.push(source);
	vis[source]=true;
    

	while(!q.empty()){
		int cur_n = q.front();
		q.pop();
		cout<<cur_n<<" ";
		for(auto child: g[cur_n]){
            if(vis[child]==true) continue;
            q.push(child);
            vis[child]=true;
            level[child]=level[cur_n]+1;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++){
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}

	bfs(1);
	cout<<endl;
	for(int i=1;i<=n;i++) cout<<level[i]<<" ";
	
	return 0;
}