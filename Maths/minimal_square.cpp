#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int a,b;
		cin>>a>>b;

		int side=min(max(2*b,a),max(2*a,b));
		int area=side*side;
		cout<<area<<endl;
	}
	return 0;
}