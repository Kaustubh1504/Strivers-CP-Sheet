#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1e5+10;
const int INF = 1e5+10;
vector<pair<int,int>> g[N];
bool vis[N];
int dis[N];

void dijisktra(int source){
   set<pair<int,int>> st;
   st.insert({0,source});
   dis[source]=0;

   while(st.size()>0){
   	//remove the first element i.e the element with smallest weight
   	auto cur_node= *st.begin();
   	int v = cur_node.second;
   	int wt = cur_node.first;
   	st.erase(st.begin());
    
    //when we remove the element from the set mark it as visited
    if(vis[v]==true) continue;
    vis[v]=true;

    //iterate over all the child of the curren node

    for(auto child: g[v]){
    	int child_n=child.first;
    	int child_wt=child.second;

    	if(dis[v]+child_wt<dis[child_n]){
    		//if we can minimise the dis of the child node
    		//then minimise
    		dis[child_n]=dis[v]+child_wt;

    		//insert the new dis in the set
    		st.insert({dis[child_n],child_n});
    	}
    }





   }

}
int main(int argc, char const *argv[])
{
	cin>>n>>m;

	for(int i=1;i<=m;i++){
		int x,y,wt;
		cin>>x>>y>>wt;
		g[x].push_back({y,wt});
	}
	for(int i=1;i<=n;i++){
		dis[i]=INF;
	}

	dijisktra(1);

	for(int i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	}
	return 0;
}