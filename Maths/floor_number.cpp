#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n,x;

		cin>>n>>x;
		int ans;
		if(n==1 ||  n==2) ans=1;
		else {
			 ans=floor((n-3)/x)+ 2; 
			// ans = ceil((n-2)/x) + 1;
		}

		cout<<ans<<endl;

	}
	return 0;
}