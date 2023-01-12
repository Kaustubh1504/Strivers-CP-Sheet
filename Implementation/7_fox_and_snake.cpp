#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	string str;
    int t=1;
    int c=0;
	for(int i=0;i<n;i++){
		str="";
		if(t==1) c=m-1;
		else c=0;
		for(int j=0;j<m;j++){
			if(i%2==0){
				str+='#';
			}
			else{
				if(j==c) {
					str+="#";
					t=~t;
					//cout<<t;
				}
				else str+='.';
				
			}
		}
		
		
		cout<<str<<'\n';
	}
	return 0;
}