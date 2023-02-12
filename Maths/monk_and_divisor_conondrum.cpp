#include<bits/stdc++.h>
using namespace std;
int arr[10000];
const int N = 1e3+10;

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return ((a*b)/gcd(a,b));
}

bool isPresent(int tar){
	bool present=false;

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++){
		if(arr[i]==tar){
			present=true;
			break;
		}
	}
	return present;
}


int main()
{
	int n;
	cin>>n;

	int mx=INT_MIN;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		mx=max(mx,arr[i]);
		//cout<<arr[i];
	}
	//cout<<mx;


	int divisor[N];
	memset(divisor,0,sizeof(divisor));

	for(int i=2;i<=N;i++){

		//divisor[i]++;	
		for(int j=i;j<=N;j+=i){
			
			if(isPresent(j)){ //if j is present in the array increament the count
				divisor[i]++;
			}
			
		}
	}

	//for(int i=2;i<=N;i++) cout<<i<<" "<<divisor[i]<<endl;



	//cout<<lcm(4,5);
	int t;
	cin>>t;
	//cout<<t;
	while(t--){
		int p,q;
		cin>>p>>q;

		//find the union
		int ans = divisor[p]+divisor[q] - divisor[lcm(p,q)];
		cout<<ans<<endl;
		// cout<<lcm(p,q);
		// cout<<gcd(4,5);

	}
	return 0;
}