#include<bits/stdc++.h>
using namespace std;
int n;
int dp[1000][1000];
int func(int i,int j,vector<vector<int>> &a){
    
    
    if(i==n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int down = a[i][j] + func(i+1,j,a);
    int diad = a[i][j] + func(i+1,j+1,a);
    
    return dp[i][j]=max(down,diad);
}



int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        memset(dp,-1,sizeof(dp));
        cin>>n;
        vector<int> dum(n,0);
        vector<vector<int>>  tri(n,dum);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>tri[i][j];
            }
        }
        
        cout<<func(0,0,tri)<<endl;
    }
    
    
    
    return 0;
}