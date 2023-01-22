#include<bits/stdc++.h>
using namespace std;
int g[100][100];
int level[100][100]={100};
bool vis[100][100];
int n,m;


void bfs(vector<pair<int,int>> pos){
      //add all the positions in the list and mark them as visited
	queue<pair<int,int>> q;
	for(auto source:pos){
		q.push({source.first,source.second});
		vis[source.first][source.second]=true;
		level[source.first][source.second]=0;
	}

	// iterate over the child of the elements in the queue
	while(!q.empty()){
		pair<int,int> cur = q.front();
		q.pop();

		int row = cur.first;
		int col = cur.second;

		if(row+1<n && vis[row+1][col]==false){
			q.push({row+1,col});
			vis[row+1][col]=true;
			level[row+1][col]=level[row][col]+1;
		}
		if(row-1>=0 && vis[row-1][col]==false){
			q.push({row-1,col});
			vis[row-1][col]=true;
			level[row-1][col]=level[row][col]+1;
		}
		
		if(col+1<m && vis[row][col+1]==false){
			q.push({row,col+1});
			vis[row][col+1]=true;
			level[row][col+1]=level[row][col]+1;
		}
		
		if(col-1>=0 && vis[row][col-1]==false){
			q.push({row,col-1});
			vis[row][col-1]=true;
			level[row][col-1]=level[row][col]+1;
		}

		if(row+1<n && col+1<m && vis[row+1][col+1]==false){
			q.push({row+1,col+1});
			vis[row+1][col+1]=true;
			level[row+1][col+1]=level[row][col]+1;

		}
		if(row+1<n && col-1>=0 && vis[row+1][col-1]==false){
			q.push({row+1,col-1});
			vis[row+1][col-1]=true;
			level[row+1][col-1]=level[row][col]+1;
		}
		if(row-1>=0 && col+1<m && vis[row-1][col+1]==false){
			q.push({row-1,col+1});
			vis[row-1][col+1]=true;
			level[row-1][col+1]=level[row][col]+1;

		}
		if(row-1>=0 && col-1>=0 && vis[row-1][col-1]==false){
			q.push({row-1,col-1});
			vis[row-1][col-1]=true;
			level[row-1][col-1]=level[row][col]+1;
		}
		
	}
}
int main(int argc, char const *argv[])
{   

	int t;
	cin>>t;
	while(t--){
		
	 	cin>>n>>m;
	 	int mx=INT_MIN;
	 	for(int i=0;i<n;i++){
	 		for(int j=0;j<m;j++) {
	 			cin>>g[i][j];
	 			mx=max(mx,g[i][j]);
	 		}
	 	}

	 	//cout<<mx<<endl;

	 	//find position of the maximum numbers
	 	vector<pair<int,int>> pos;
	   	for(int i=0;i<n;i++){
	 		for(int j=0;j<m;j++){
	 			if(g[i][j]==mx){
	 				pos.push_back({i,j});
	 			}
	 		}
	 	}
	 	//perform multisource bfs
	 	bfs(pos);
	 	//return the max value in the level arr
	 	int ans=INT_MIN;
	 	for(int i=0;i<n;i++){
	 		// ans=max(ans,level[i]);
	 		for(int j=0;j<m;j++) ans=max(ans,level[i][j]);
	 	}

	 	cout<<ans<<endl;
	 	// for(int i=0;i<n;i++){
	 	// 	for(int j=0;j<m;j++) {
	 	// 		cout<<level[i][j]<<" ";
	 	// 		//vis[i][j]=false;
	 	// 	}
	 	// 	cout<<endl;
	 	// }

	 	for(int i=0;i<100;i++){
	 		for(int j=0;j<100;j++) {
	 			level[i][j]=100;
	 			vis[i][j]=false;
	 		}
	 	}
	}
	
	return 0;
}