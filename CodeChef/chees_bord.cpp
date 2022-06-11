#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		int x,y;
		x = a-c;
		y = b-d;

		if(x<0) x = x*(-1);
		if(y<0) y = y*(-1);

		cout<<max(x,y)<<endl;
	}
	return 0;
}