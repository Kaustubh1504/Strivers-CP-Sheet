#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;

		long long sum = a+b+c;
		bool canWithstand=false;
		long long e = sum/9;

		if(a>=e && b>=e && c>=e) canWithstand=true;

		if(sum%9==0 && canWithstand==true) cout<<"YES";
		else cout<<"NO";

		cout<<endl;
	}
	return 0;
}