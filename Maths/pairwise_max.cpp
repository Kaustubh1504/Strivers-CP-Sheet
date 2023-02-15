#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long x,y,z;
		long long a=-1,b=-1,c=-1;

		cin>>x>>y>>z;

		// a=x;

		// if(y>x) c=y;
		// if(y==x) c=x-1;

		// if(z>c) b=z;
		// if(z==c) b=c-1;

		// if(b==-1 || c==-1){
		// 	cout<<"NO";
		// }else{
		// 	cout<<"YES"<<endl;
		// 	cout<<a<<" "<<b<<" "<<c;

		// }

		// cout<<endl;

		a=x;

		if(y>x) c=y;
		else c=x-1;

		if(z>c) b=z;
		else b=c-1;

		if(b==-1 || c==-1){
			cout<<"NO";
		}else{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c;

		}

		cout<<endl;


	}
	return 0;
}