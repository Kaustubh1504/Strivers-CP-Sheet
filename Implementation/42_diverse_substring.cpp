#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	string s;
	cin>>n>>s;
	string diverse="";
	bool isDiverse=false;
	
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]){
			diverse+=s[i];
			diverse+=s[i+1];
			isDiverse=true;
			break;
		}
	}

	if(isDiverse){
		cout<<"YES\n"<<diverse;
	}
	else{
		cout<<"NO";
	}
	return 0;
}