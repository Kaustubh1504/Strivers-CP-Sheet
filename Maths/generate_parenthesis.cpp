#include<bits/stdc++.h>
using namespace std;



void generate(string &s,int open,int close,vector<string> &valid){

	if(open==0 && close == 0){
		valid.push_back(s);
		return;
	}

	if(open>0){
		s.push_back('(');
		generate(s,open-1,close,valid);
		s.pop_back();
	}

	if(close >0){
		if(open<close){
			s.push_back(')');
			generate(s,open,close-1,valid);
			s.pop_back();
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	vector<string> valid;
	generate(s,n,n,valid);
	for(auto e: valid) cout<<e<<" ";

	return 0;
}