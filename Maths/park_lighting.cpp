#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>n>>m;
		int no=n*m;
		if(no&1==0){
			cout<<no/2;
		}else{
			cout<<no/2 + no%2;
		}
		cout<<endl;
	}
	return 0;
}