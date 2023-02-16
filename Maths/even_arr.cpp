#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int evncnt=0;
		int oddcnt=0;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if((arr[i]&1)==0) evncnt++;
			else oddcnt++;
		}

		if(evncnt!=((n+1)/2) || oddcnt !=((n/2))){
			cout<<-1;
		}else{
			int notinplace=0;

			for(int i=0;i<n;i++){
				int xr=(arr[i]^i);
				if(xr&1!=0) notinplace++;
			}



			cout<<notinplace/2;
		}

		cout<<endl;
	}
	return 0;
}