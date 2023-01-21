#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e5+10;
vector<pair<int,int>> g[N];

vector<int> level(N,INF);
int vis[N];
int n,m;

int bfs(){
	deque <int> q;
	q.push_back(1);
	level[1]=0;
	//vis[1]=true;
	while(!q.empty()){
		int cur = q.front();
		q.pop_front();

		for(auto child:g[cur]){
			int child_n = child.first;
			int wt= child.second;

			if(level[cur]+wt<level[child_n]){
				level[child_n]=level[cur]+wt;
				if(wt==1){
					q.push_back(child_n);
				}else{
					//wt is zero
					q.push_front(child_n);
				}

			}
		}
	}

	return level[n]==INF?-1:level[n];
}




int main(int argc, char const *argv[])
{
	
	cin>>n>>m;

	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		if(x==y) continue;
		g[x].push_back({y,0});
		g[y].push_back({x,1});
	}

	cout<<bfs();
	return 0;
}