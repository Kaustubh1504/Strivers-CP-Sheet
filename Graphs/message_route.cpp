#include<bits/stdc++.h>
using namespace std;
const long long N = 1e6;
vector<long long> g[N];
long long par[N];
bool vis[N];
long long level[N];


void bfs(long long v){
	queue<long long> q;
	q.push(v);
	vis[v]=true;

	while(!q.empty()){
		long long cur = q.front();
		q.pop();

		for(auto child: g[cur]){
			if(vis[child==true]) continue;
			q.push(child);
			vis[child]=true;
			//par[child]=cur;
			level[child]=level[cur]+1;	
		}
	}
}

void bfs2(long long source){
	queue<long long> q;
	q.push(source);
	vis[source]=true;
    // level[source]=1;

	while(!q.empty()){
		long long cur_n = q.front();
		q.pop();
		//cout<<cur_n<<" ";
		for(auto child: g[cur_n]){
            if(vis[child]==true) continue;
            q.push(child);
            vis[child]=true;
            level[child]=level[cur_n]+1;
            par[child]=cur_n;
		}
	}
}

void path(long long p){

	vector<long long> path;
	while(p!=0){
		// cout<<p<<" ";
		path.push_back(p);
		p=par[p];
	}
	reverse(path.begin(), path.end());
	for(auto c: path) cout<<c<<" ";
}

int main(int argc, char const *argv[])
{
	long long n,m;
	cin>>n>>m;

	for(long long i=1;i<=m;i++){
		long long x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	bfs2(1);
	// for(long long i=1;i<=n;i++) cout<<level[i]<<" ";
	// cout<<endl;
	// for(long long i=1;i<=n;i++) cout<<par[i]<<" ";
	// cout<<endl;
	if(vis[n]==true) {
		cout<<level[n]+1<<endl;
		path(n);
	}else cout<<"IMPOSSIBLE";

	return 0;
}