#include<bits/stdc++.h>
using namespace std;
int floorMap[1005][1005];
bool vis[1005][1005];
int n,m;

void dfs(int i,int j){
	vis[i][j]=true;

	//move in all four direction
	//up
	if(vis[i-1][j]==false && floorMap[i-1][j]==1 && (i-1)>=0){
		dfs(i-1,j);
	}
	//right
	if(vis[i][j+1]==false && floorMap[i][j+1]==1 && (j+1)<m){
		dfs(i,j+1);
	}
	//left 
	if(vis[i][j-1]==false && floorMap[i][j-1]==1 && (j-1)>=0){
		dfs(i,j-1);
	}
	//down
	if(vis[i+1][j]==false && floorMap[i+1][j]==1 && (i+1)<n){
		dfs(i+1,j);
	}
}

int main(int argc, char const *argv[])
{
	cin.sync_with_stdio(false);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			cin>>c;
			if(c=='#') floorMap[i][j]=0;
			else floorMap[i][j]=1;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(floorMap[i][j]==1 && vis[i][j]==false){
				dfs(i,j);
				cnt++;
			}
		}
	}

	cout<<cnt<<endl;
	return 0;
}