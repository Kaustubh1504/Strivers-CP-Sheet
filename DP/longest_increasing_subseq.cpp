#include<bits/stdc++.h>
using namespace std;

const int N = 25e5+10;

vector<int> a(N);
int dp[N];

int lis(int i){ //longest increasing subsequence till i

	if(dp[i]!=-1) return dp[i];
	int ans=1;  //if we do not find smaller elements before i still the ans will be 1

	for(int j=0;j<i;j++){
		if(a[i]>a[j]){
			ans=max(ans,lis(j)+1); //longest increasing subsequence till j plus one
		}

	}
	return dp[i]=ans;

}



int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=0;i<N;i++) dp[i]=-1;
	for(int i=0;i<n;i++) cin>>a[i];

	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,lis(i));
	}

	cout<<ans;


	return 0;
}