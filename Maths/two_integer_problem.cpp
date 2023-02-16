#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long dff=abs(a-b);

		long long ans=0;
		int i=10;
		while(dff>0){
			ans+=dff/i;
			dff=dff%i;
			i--;
		}

		cout<<ans<<endl;
	}
	return 0;
}