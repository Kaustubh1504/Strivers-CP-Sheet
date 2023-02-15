#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--){
    	long long n;
    	cin>>n;

    	long long ans;

    	if((n&1)==0) ans=n/2;
    	else ans = n/2 +1;
    	cout<<ans<<endl;
    }
	return 0;
}
