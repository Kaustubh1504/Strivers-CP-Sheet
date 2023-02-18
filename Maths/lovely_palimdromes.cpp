#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string ans=s;
	reverse(s.begin(), s.end());
	ans+=s;

	cout<<ans;
	
	return 0;
}