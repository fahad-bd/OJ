#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		char a;
		cin>>a;

		if(a=='b' || a=='B') cout<<"BattleShip\n";
		else if(a=='c' || a=='C') cout<<"Cruiser\n";
		else if(a=='d' || a=='D') cout<<"Destroyer\n";
		else cout<<"Frigate\n";
	}
	return 0;
}