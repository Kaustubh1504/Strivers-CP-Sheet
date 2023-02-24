#include <bits/stdc++.h>
using namespace std;
const int N = 100000000;
vector<long long> dp(N,-1);
long long func(long long n){
    
    
    // if(n==0) return 0;
    // if(dp[n]!=-1) return dp[n];
    
    // long long ans = max(n, func(n/2)+func(n/3)+func(n/4) );
    
    // return dp[n]=ans;
    
    if(n<12) return n;
    else return func(n/2) + func(n/3) + func(n/4);
}

int main() {
	// your code goes here
	int coin;
	while(cin>>coin){
	    //memset(dp,-1,sizeof(dp));
	    cout<<func(coin)<<endl;
	    
	}
	return 0;
}
