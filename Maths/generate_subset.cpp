#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allsubsets;
void genrate(vector<int> &subset, int i, vector<int> a){


	if(i==a.size()){
		allsubsets.push_back(subset);
		return;
	}

   //ith element is not included

	genrate(subset,i+1,a);

	//ith element is included
	subset.push_back(a[i]);
	genrate(subset,i+1,a);

	subset.pop_back();
}

int main(int argc, char const *argv[])
{

	int n;
	cin>>n;
	vector<int> a;
	vector<int> subset;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		a.push_back(c);
	}

	genrate(subset,0,a);
	for(auto subset: allsubsets){
		for(auto s: subset){
			cout<<s;
		}
		cout<<endl;
	}
	
	return 0;
}