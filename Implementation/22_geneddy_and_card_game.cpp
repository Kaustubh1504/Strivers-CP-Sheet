#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string tablecard;
	string handcards[5];

	cin>>tablecard;
	for(int i=0;i<5;i++) cin>>handcards[i];

	bool canPlay=false;
	for(auto card: handcards){
		if(card[0]==tablecard[0] || card[1]==tablecard[1]){
			canPlay=true;
			break;
		}
	}
	if(canPlay) cout<<"YES";
	else cout<<"NO";
	return 0;
}