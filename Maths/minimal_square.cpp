#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int a,b;
		cin>>a>>b;

		int side=min(a,b);
		int area = 4*side*side;

		cout<<area<<endl;
	}
	return 0;
}