#include<bits/stdc++.h>
using namespace std;
const int N = 1e8+7;
vector<bool> seive(N,1);
vector<int> primes;

int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	//calculate primes
	for(int i=3;i*i<=N;i+=2){
		if(seive[i]==false) continue;
		for(int j=i*i,k=i<<1;j<=N;j+=k){
			seive[j]=false;
		}
	}

	//insert primes in array
	primes.push_back(2);
	for(int i=3;i<=N;i++){
		if(seive[i]==true && i%2!=0){
			primes.push_back(i);
		}
	}

	// cout<<primes.size()<<endl;
	// cout<<primes[primes.size()-1]<<endl;

	while(q--){
		int k;
		cin>>k;

		cout<<primes[k-1]<<"\n";
	}
	return 0;
}