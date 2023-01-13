#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;

		bool isPalimdrome = true;

		for(int i=0;i<n;i++){
			int a =s[i];
			int b =s[n-i-1];
			//cout<<a<<" "<<b<<" ";
			if(abs(a-b)!=2 && abs(a-b)!=0) isPalimdrome= false;
		}

		if(isPalimdrome) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}