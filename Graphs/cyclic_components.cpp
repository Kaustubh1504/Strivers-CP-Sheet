#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<int> g[N];
bool vis[N];

vector<int> cur_dfs;
int Rank[N];

vector<int> deg;
void dfs(int v){
	vis[v]=true;
	cur_dfs.push_back(v);
	deg.push_back(g[v].size());
	//no children of v
	//Rank[v]=g[v].size();

	for(auto child:g[v]){
		if(vis[child]==true) continue;
		dfs(child);
	}
}

// bool dfs(int vertex,int parent){
// 	vis[vertex]=true;

// 	bool isLoopExists = true;
//     //cout<<vertex<<" ";
// 	// if(sizeof(g[vertex])>2 || sizeof(g[vertex])==1) return false;
// 	if(g[vertex].size()!=2){
// 	 //cout<<g[vertex].size()<<endl;
// 	 return false;
// 	}
// 	for(auto child: g[vertex]){

// 		if(vis[child]==true && child==parent) continue;
// 		if(vis[child]==true && g[child].size()!=2) return false;
// 		if(vis[child]==true) return true;
// 		//if(g[vertex].size!=2) return false;
// 		isLoopExists &=dfs(child,vertex);
// 	}

// 	return isLoopExists;
// }
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;

		g[x].push_back(y);
		g[y].push_back(x);
		++Rank[x];
		++Rank[y];
	}
    
    int cnt=0;

    // bool s = dfs(17,0);
    // cout<<s;
// 	for(int i=1;i<=n;i++){
// 		if(vis[i]==true) continue;
// 		if(dfs(i,0)) {
// 			// cout<<endl;
// 			cnt++;

// 			//cout<<i<<" "<<cnt<<endl;
// 		}
// 		// cout<<endl;

// 	}
   
   // cout<<cnt;
    
    for(int i=1;i<=n;i++){
    	if(vis[i]==true) continue;
    	bool loop=true;
    	cur_dfs.clear();
    	deg.clear();
    	dfs(i);

    	//cur diff vector has elements in dfs order
    	//check if all the elemnts has a Rank of 2

    	// for(auto c:cur_dfs){
    	// 	if(Rank[c]!=2){
    	// 		loop=false;
    	// 		//break;
    	// 	}
    	// }
    	// //cout<<loop<<endl;
    	for(auto e: deg){
    		if(e!=2){
    			loop=false;
    			break;
    		}
    	}
    	if(loop==true) cnt++;
    }

    //for(int i=1;i<=n;i++) cout<<Rank[i]<<" ";

    cout<<cnt;

	return 0;
}