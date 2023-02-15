#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		long long a,b,c,n;
		cin>>a>>b>>c>>n;

		int total = a+b+c+n;
		int each= total/3;
		if(total%3==0 && each>=a && each>=b && each>=c){
			cout<<"YES";
		} 
		else cout<<"NO";

		cout<<endl;


	}
	return 0;
}