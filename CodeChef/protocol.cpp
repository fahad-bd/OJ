#include<iostream>
using namespace std;

int main()
{

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		char s[n];

		for(int i=0;i<n;i++) cin>>s[i];

		int count = 0;

		for(int i=0;i<n;i++){
			if(s[i] != s[i+1]){
				count++;
			}
			else if(s[i] == s[i+1]){
				count++;
				i++;			
			} 
		}
		cout<<count<<endl;

	}
	return 0;
}