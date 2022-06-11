#include<iostream>
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
		int freq[1001]={0};

		for(int i=0;i<n;i++){
			freq[arr[i]]++;
		}
		int area = 1;
		bool flag = false;
		for(int i=1000;i>=0;i--){
			if(!flag){
				if(freq[i]>=2){
					area *= i;
					flag = true;
					freq[i] -= 2;
				}
			}
			if(flag){
				if(freq[i]>=2){
					area *= i;
					flag = false;
					break;
				}
			}
		}
		if(!flag){
			cout<<area<<endl;
		} 
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}