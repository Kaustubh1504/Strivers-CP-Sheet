#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int t,t2;
	cin>>t;
	vector<int> masks;
	t2=t;
	while(t--){
		int n;
		cin>>n;
		int mask=0;
		for(int i=0;i<n;i++){
			int day;
			cin>>day;
			// cout<<actived;
			//set the bit
			mask=(mask | (1<<day));
		}
		//cout<<mask<<endl;

		masks.push_back(mask);
	}

	// for(int i=0;i<t2;i++){
	// 	cout<<masks[i]<<endl;
	// }
	int person1=-1;
	int person2=-1;
	int mx=0;
	for(int i=0;i<t2;i++){
		for(int j=i+1;j<t2;j++){
			int intersection = masks[i] & masks[j];
			int cnt = __builtin_popcount(intersection);

			if(cnt>mx){
				person1=i;
				person2=j;
				mx=cnt;
			}

		}
	}

	cout<<person1<<" "<<person2<<" "<<mx;



	return 0;
}