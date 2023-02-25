#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<int> g[N];
bool vis[N];

void dfs(int v){
	vis[v]=true;

	for(auto child : g[v]){
		if(vis[child]==true) continue;

		dfs(child);
	}
}


int main(int argc, char const *argv[])
{
	int m,n,cnt=0;
	cin>>n>>m;
	vector<pair<int,int>> ans;

	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	int previs=0;

	for(int i=1;i<=n;i++){
		if(vis[i]==true) 
			{
				
				previs=i;
				continue;
			}
		else{

			ans.push_back({previs,i});
			dfs(i);
			cnt++;
			previs=i; 
		}

	}

	cout<<cnt-1<<endl;
	for(int i=1;i<ans.size();i++){
		auto c = ans[i];
		cout<<c.first<<" "<<c.second<<endl;
	}
	return 0;
}