#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;
void dfs(int vertex){
	// take action on vertex after entering the vertex

	vis[vertex]=true;
    //cout<<vertex<<endl;
    current_cc.push_back(vertex);
	for(auto child: g[vertex]){

		//cout<<"parent "<<vertex<<" child "<<child<<endl;
		if(vis[child]==true) continue;
		//take action on child before entering the child node
		dfs(child);
		//take action on child before exiting child node
	}

	//take action on vertex before exiting vertex
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

	// dfs(3);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(vis[i]==true) continue;
		current_cc.clear();
		cnt++;
		dfs(i);
		cc.push_back(current_cc);

	}

	for(auto c: cc){
		for(auto e:c){
			cout<<e<<" ";
		}
		cout<<endl;
	}

	cout<<cc.size();
	return 0;
}