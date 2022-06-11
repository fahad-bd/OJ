#include<bits/stdc++.h>
//#define int long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int s,a,b,c,Dc;
		cin>>s>>a>>b>>c;


		double change = s + ((c/100.0) * s);

		//cout<<"s = "<<change<<endl;

		if(change >= a && change <= b) cout<<"Yes\n";
		else cout<<"No\n";

	}
	return 0;
}