#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = 0, sum = 0, countSum = 0;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}

		ans = sum;
		for(int i=0;i<n;i++){
			countSum+=arr[i];

			int restSum = sum - countSum;
			int needTime = max(restSum, countSum);

			ans = min(ans, needTime);
		}
		cout<<ans<<endl;
	}
	return 0;
}