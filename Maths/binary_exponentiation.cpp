#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int binPowRec(int a,int b){
	if(b==0) return 1;
	int res = binPowRec(a,b/2);
	if(b&1==1){
		//odd
		return ((a*(res*res)%M)%M);

		
	}else{
		return ((res*res)%M);
	}
}

int binPowIte(int a,int b){
	int ans=1;
	while(b){
		if(b&1){
		ans=(ans*1ll*a)%M;
		}

		a=(a*1ll*a)%M;
		b=b>>1;

	}

	return ans;
	

}

int main(int argc, char const *argv[])
{
	cout<<binPowRec(2,10);
	cout<<binPowIte(2,10);
	return 0;
}