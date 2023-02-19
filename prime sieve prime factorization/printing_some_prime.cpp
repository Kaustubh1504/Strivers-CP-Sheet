#include<bits/stdc++.h>
using namespace std;
const int N = 1e8+10;
vector<int> seive(N,0);
vector<int> primes;

int main(int argc, char const *argv[])
{	

	seive[0]=seive[1]=1;
	int l=0,j;
	for(int i=3;i*i<N;i+=2){
		if(seive[i]!=0) continue;
		// primes.push_back(i);
		for(j=i*i,l=i<<1;j<N;j+=l){
			seive[j]=i;
		}
	}

	// for(int i=0;i<primes.size();i+=100){
	// 	cout<<primes[i]<<endl;
	// }

	int k=0;
	cout<<"2\n";
	for(int i=3;i<=N;i++){
		// if(seive[i]==0 ) {
		// 	cout<<i<<" ";
		// 	k++;
		// }

		//count the primes
		//should not be even
		if(seive[i]==0 && i%2!=0){
			k++;
		}

		if(seive[i]==0 && k==100 && i%2!=0) {
			cout<<i<<"\n";
			k=0;
		}
	}

	// for(int i=2;i<=N;i++){

	// }
	return 0;
}
