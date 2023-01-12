#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,i=0,d;
		cin>>n;
		d=n%10;
		while(n!=0){
			n=n/10;
			i++;
		}

		int ans = (d-1)*10 + i*(i+1)/2;
		cout<<ans<<"\n";


	}
	return 0;
}