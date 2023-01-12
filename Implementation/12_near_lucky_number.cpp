#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n;
	cin>>n;
	int ctr=0;

	while(n!=0){
		int rem= n%10;
		n=n/10;
		if(rem==4 || rem==7) ctr++;
	}

	if(ctr==4 || ctr==7) cout<<"YES";
	else cout<<"NO";
	return 0;
}