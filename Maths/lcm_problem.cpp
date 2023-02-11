#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int l,r;
		cin>>l>>r;

		if(2*l>r){
			cout<<-1<<" "<<-1;
		}else{
			cout<<l<<" "<<2*l;
		}

		cout<<endl;
	}
	return 0;
}