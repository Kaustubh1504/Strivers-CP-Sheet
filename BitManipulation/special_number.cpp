#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n,k;

		cin>>n>>k;

		// n is base representation
		// kth number
		long long ans=0;
		long long p=1;
		for(int i=0;i<31;i++){
			if(((k>>i) & 1)==1){
				ans=(ans+p)%M;	
		}

			p=(p*n)%M;
		}

		cout<<ans<<endl;
	}
	return 0;
}