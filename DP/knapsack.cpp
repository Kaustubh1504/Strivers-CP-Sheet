#include<bits/stdc++.h>
using namespace std;
const int N = 1000000;
int val[100],wt[100];

long long dp[100][10000];

long long func(int index,int wt_left){

	if(wt_left==0) return 0;
	if(index<0)  return 0;
	if(dp[index][wt_left]!=-1) return dp[index][wt_left];
	//do not take element at index
	long long ans =ans=func(index-1,wt_left);

	//take the element at the index
	if(wt_left-wt[index]>=0)
	 ans= max(ans,func(index-1,wt_left-wt[index])+val[index]);

	return dp[index][wt_left]=ans;


}


int main(int argc, char const *argv[])
{
	int n,capacity;
	memset(dp,-1,sizeof(dp));
	cin>>n>>capacity;

	for(int i=0;i<n;i++){
		cin>>wt[i]>>val[i];

	}

	cout<<func(n-1,capacity);
	return 0;
}