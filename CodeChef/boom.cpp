#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		int answer=0;
		for(int i=n-1;i>=0;i--){
			if(arr[i]<x){
				answer=i+1;
				break;
			}
		}

		cout<<answer<<endl;
	}
	return 0;
}