#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	

	vector<int> primes;
	int n;
	cin>>n;

	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			primes.push_back(i);
			n=n/i;
		}
	}

	if(n>1){
		primes.push_back(n);
	}

	for(auto p: primes){
		cout<<p<<" ";
	}
	return 0;
}