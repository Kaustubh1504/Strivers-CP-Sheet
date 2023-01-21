#include<bits/stdc++.h>
using namespace std;

bool vis[8][8];
int level[8][8];
queue<pair<int,int>> q;

void bfs(string start){

	//convetting from string to int
	int x1=start[0]-'a'; 
	int y1=start[1]-'1';

	// int x2=end[0]-'a';
	// int y2=end[1]-'1';

	//cout<<x1<<","<<y1<<" "<<x2<<","<<y2<<" ";

	q.push({x1,y1});
	vis[x1][y1]=true;

	while(!q.empty()){
		//take the first element out
		pair<int,int> cur=q.front();
		q.pop();

		int row=cur.first;
		int col=cur.second;

        //insert all the possible movement of horse on the board 
        if(vis[row+2][col+1]==false && row+2<8 && col+1<8 ){
        	q.push({row+2,col+1}); //insert into the queue
        	vis[row+2][col+1]=true;//mark visited as true
        	level[row+2][col+1]=level[row][col]+1; // mark the level of the visited node
        }
		

	    if(vis[row+2][col-1]==false && row+2<8 && col-1>=0 )
	    {
	    	q.push({row+2,col-1});
	    	vis[row+2][col-1]=true;
        	level[row+2][col-1]=level[row][col]+1;

	    }
		

		if(vis[row+1][col+2]==false && row+1<8 && col+2<8 ){
			q.push({row+1,col+2});
			vis[row+1][col+2]=true;
        	level[row+1][col+2]=level[row][col]+1;
		}
		

		if(vis[row+1][col-2]==false && row+1<8 && col-2>=0 ){
			q.push({row+1,col-2});
			vis[row+1][col-2]=true;
        	level[row+1][col-2]=level[row][col]+1;
		}
		

		if(vis[row-1][col+2]==false && row-1>=0 && col+2<8 ){
			q.push({row-1,col+2});
			vis[row-1][col+2]=true;
        	level[row-1][col+2]=level[row][col]+1;
		}
		

		if(vis[row-1][col-2]==false && row-1>=0 && col-2>=0 ){
			q.push({row-1,col-2});
			vis[row-1][col-2]=true;
        	level[row-1][col-2]=level[row][col]+1;
		}
		

	    if(vis[row-2][col+2]==false && row-2>=0 && col+2<8 ){
	    	q.push({row-2,col-1});
	    	vis[row-2][col-1]=true;
        	level[row-2][col-1]=level[row][col]+1;
	    }
		

		if(vis[row-2][col+1]==false && row-2>=0 && col+1<8 ){
			q.push({row-2,col+1});
			vis[row-2][col+1]=true;
        	level[row-2][col+1]=level[row][col]+1;
		}
		





	}






}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		string start;
		string end;

		cin>>start>>end;

		bfs(start);
		int x2=end[0]-'a';
		int y2=end[1]-'1';

		cout<<level[x2][y2]<<endl;

	}
	return 0;
}