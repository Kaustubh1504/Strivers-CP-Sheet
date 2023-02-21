#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	stack<char> st;

	for(auto c: s){
		if(st.empty()==true){
			st.push(c);
		}else{
			char last = st.top();
			if(last==c){
				st.pop();

			}else{
				st.push(c);
			}
		}
	}

	if(st.empty()) cout<<"YES";
	else cout<<"NO";
	return 0;
}
