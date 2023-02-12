#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

int main(int argc, char const *argv[])
{
	/* code */
	vector<bool> isPrime(N,1);
	vector<int> lp(N,0),hp(N,0);
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<N;i++){
		if(isPrime[i]==true){
			lp[i]=hp[i]=i;
			for(int j=2*i;j<N;j+=i){
				isPrime[j]=false;
				hp[j]=i;

				if(lp[j]==0){
					lp[j]=i;
				}
			}
		}
	}

	// for(int i=1;i<N;i++){
	// 	cout<<isPrime[i]<<" ";
	// }

	
	return 0;
}