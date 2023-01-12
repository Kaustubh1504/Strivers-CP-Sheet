#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x1,x2,x3;
	cin>>x1>>x2>>x3;

	int ans = max(max(x1,x2),x3)-min(min(x1,x2),x3);
	cout<<ans;
	return 0;
}