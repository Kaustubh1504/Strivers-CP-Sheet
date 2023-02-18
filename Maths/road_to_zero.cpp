#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long t;
	cin>>t;

	while(t--){
		long long x,y,a,b;
		cin>>x>>y>>a>>b;
		long long mi = min(x,y);
		long long mx = max(x,y);
		//b coins spent
		long long coinsB= mi;

		//coins left 
		long long coinsA = mx - coinsB;

		long long ans = coinsA*a + coinsB*b;

		long long onlyA = (x+y)*a;

		ans=min(ans,onlyA);


		cout<<ans<<endl;
	}
	return 0;
}