#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		long long a,b;
		cin>>a>>b;
		// if(a<b) cout<<(b-a);
		// else cout<<a%b;
		// cout<<endl;
		if(a%b==0) cout<<0;
		else cout<<b-a%b;

		cout<<endl;
	}
	return 0;
}