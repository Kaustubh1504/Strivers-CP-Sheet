#include<bits/stdc++.h>
using namespace std;

bool palimdrome(int i,string s,int n){

	if(i>=n) return true;
	if(s[i]!=s[n-i-1]) return false;
	return palimdrome(i+1,s,n);
}

int main(int argc, char const *argv[])
{

	string s="aaccbccaa";
	int n = s.length();

	cout<<palimdrome(0,s,n);
	
	return 0;
}