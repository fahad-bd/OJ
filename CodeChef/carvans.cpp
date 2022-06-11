#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		int ans = 0;
		int minumam = arr[0];

		for(int i=0;i<n;i++){
			if(arr[i]<=minumam){
				minumam = min(minumam,arr[i]);
				ans++;
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}