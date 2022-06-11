#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;

		int arr[101]={0};

		for(int i=0;i<n;i++){
			cin>>a;
			arr[a]++;
		}

		int ans = 0, count = 0;

		for(int i=0;i<=100;i++){
			if(arr[i]!=0){
				count+=arr[i];
				if(count > n - count){
					ans+=arr[i];
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}