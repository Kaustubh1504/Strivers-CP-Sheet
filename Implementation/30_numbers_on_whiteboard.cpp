#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		vector<int> nums;
		for(int i=1;i<=n;i++) nums.push_back(i);

		cout<<2<<"\n";

		for(int i=0;i<n-1;i++){
			int s = nums.size();
			int a = nums[s-1];
			int b = nums[s-2];
			cout<<a<<" "<<b<<"\n";

			nums.pop_back();
			nums.pop_back();

			int c = (a+b+1)/2;
			nums.push_back(c);
		}
	}
	return 0;
}