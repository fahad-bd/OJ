#include<iostream>
using namespace std;

int main()
{

	int t;
	cin>>t;

	while(t--){
		int a,b;
		cin>>a>>b;
		int arr[a];
		for(int i=0;i<a;i++) cin>>arr[i];

		int max=0;
		int count=0;

		for(int i=0;i<b;i++){
			if(arr[i]<=b){
				count++;
				if(count>max) max = count;
			}
			else count =0;
		}
		cout<<max<<endl;	
	}
	return 0;
}