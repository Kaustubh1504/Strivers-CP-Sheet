#include<bits/stdc++.h>
using namespace std;
const int N = 510;
long long dis[N][N];

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	vector<int> del_order;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>dis[i][j];
		}
	}

	for(int i=1;i<=n;i++){
		int c;
		cin>>c;
		del_order.push_back(c);
	}
    //start from end
	reverse(del_order.begin(), del_order.end());

	//floyd warshal algorithm in backward direction
	vector<long long> ans;
	for(int k=0;k<n;k++){
		int k_v = del_order[k];

		for(int i=1;i<n;i++){
			for(int j=1;j<=n;j++){
				dis[i][j]=min(dis[i][j],dis[i][k_v]+dis[k_v][j]);
			}
		}

		//compute sum of the present edges in the graph
		long long sum=0;
		for(int i=0;i<=k;i++){
			for(int j=0;j<=k;j++){
				sum+=dis[del_order[i]][del_order[j]];
			}
		}

		ans.push_back(sum);

	// 	for(int i=1;i<=n;i++){
	// 		for(int j=1;j<=n;j++){
	// 			cout<<dis[i][j]<<" ";
	// 		}
	// 		cout<<endl;
	   // }

	   // cout<<endl;

	}

	reverse(ans.begin(), ans.end());
	for(auto e: ans){
		cout<<e<<endl;
	}

	return 0;
}