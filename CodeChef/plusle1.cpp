#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;

		vector<long long> arr1;
		vector<long long> arr2;

		int count = 0;

		for(int i=0;i<n;i++){
			long long a;
			cin>>a;
			a = abs(a);
			if(count==0){
				arr1.push_back(a);
			}
			else{
				arr2.push_back(a);
			}
			count=1-count;
		}

		sort(arr1.begin(), arr1.end());
		sort(arr2.begin(), arr2.end());

		if(arr1[0]<arr2[arr2.size()-1]){
			swap(arr1[0],arr2[arr2.size()-1]);
		}

		long long sum=0;
		for(auto i: arr1) sum+=i;
		for(auto i: arr2) sum-=i;
		
		cout<<sum<<endl;	
	}
	return 0;
}