#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
int arr[100][100];
bool vis[100][100];
int m,n;

void dfs(int row,int column){
      
      vis[row][column]=true;
      arr[row][column]=2;

      if((row+1)<m &&vis[row+1][column]==false && arr[row+1][column]==1){
      	dfs(row+1,column);
      }
      if((row-1)>=0 && vis[row-1][column]==false  && arr[row-1][column]==1){
      	dfs(row-1,column);
      }
      if((column+1)<n&&vis[row][column+1]==false  && arr[row][column+1]==1){
      	dfs(row,column+1);
      }
      if((column-1)>=0&& vis[row][column-1]==false  && arr[row][column-1]==1){
      	dfs(row,column-1);
      }

}


int main(int argc, char const *argv[])
{
	
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
    

    int sr=1;
    int sc=1;

    //dfs(sr,sc);

    int cnt=0;

    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(vis[i][j]==false && arr[i][j]!=0){
				dfs(i,j);
				cnt++;
			}
		}
	}

    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) {
			cout<<arr[i][j]<<" ";
		}

		cout<<"\n";
	}

	cout<<cnt;

	
	return 0;
}