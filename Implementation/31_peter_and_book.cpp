#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int p;
	cin>>p;

	int arr[10];
	for(int i=0;i<=7;i++) cin>>arr[i];

	int i=0;
	int total=0;
	while(true){
		// total+=arr[i%7];
		// // cout<<total<<" ";
		// i++;
		// if(total>=p) break;
		if((p-arr[i%7])>0) {
			p-=arr[i%7];
			i++;
		}
		else break;


	}

	cout<<i%7+1;
	return 0;
}