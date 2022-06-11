#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int b = t;
	while(t--){
		int a;
		cin>>a;

		float c;
		c = a/b;

		int d;
		d = c;

		if((b*d) == a) cout<<"Good\n";

		else cout<<"Not Good\n";
	}
	return 0;
}