#include<bits/stdc++.h>
using namespace std;
const int N = 10000;

int dp[N];

int func(int amount,vector<int> &coins){

	if(dp[amount]!=-1) return dp[amount];
	if(amount==0) return 0;
	int ans=INT_MAX;
	for(auto coin: coins){
		if(amount-coin>=0)
		   ans=min(ans+0ll,func(amount-coin,coins) + 1ll);
	}

	return dp[amount]=ans;
}

int main(int argc, char const *argv[])
{
	int n,amount;
	vector<int> coins;
	cin>>n>>amount;

	for(int i=0;i<N;i++) dp[i]=-1;
	for(int i=0;i<n;i++) {
		int c;
		cin>>c;
		coins.push_back(c);
	}
	// coins={1,2,5};
	// amount=11;

    int ans = func(amount,coins);
	if(ans==INT_MAX) cout<<-1;
	else cout<<ans;

	return 0;
}