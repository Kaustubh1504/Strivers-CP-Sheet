#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	string encstring;
	cin>>encstring;
	
	int index = 0;
    int gap = 1;
    while (index < n)
        cout << encstring[index], index += gap, gap++;
	return 0;
}