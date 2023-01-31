#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N];
int dp[N];

int func(int i){

	if(i==0) return 0;
	if(dp[i]!=-1) return dp[i];
	int cost = INT_MAX;
	//way 1
	cost= min(cost,func(i-1)+ abs(h[i]-h[i-1]) );
	//way2
	if(i>1)
	cost = min(cost,func(i-2)+abs(h[i]-h[i-2]));
	return dp[i]=cost;
	//return cost;
}

int main(int argc, char const *argv[])
{



	int n;
	cin>>n;
	for(int i=0;i<N;i++) dp[i]=-1;

	for(int i=0;i<n;i++){
	   cin>>h[i];
	}

	cout<<func(n-1);
	
	return 0;
}
