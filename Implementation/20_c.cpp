#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		long long a,b,n;
		cin>>a>>b>>n;
		int i=0;
		while(a<=n || b<=n){
			if(a>b){
			b+=a;
			}else{
			a+=b;
			}
			i++;
		}

		cout<<i-1<<"\n";
		

	}
	return 0;
}