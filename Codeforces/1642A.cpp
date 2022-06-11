/*

Created by Fahad Ahammed
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--){
        double x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(y1==y2) cout<<y1<<endl;
        else if(y1==y3) cout<<y1<<endl;
        else if(y2==y3) cout<<y2<<endl;
        else cout<<0<<endl;
    }
    return 0;
}