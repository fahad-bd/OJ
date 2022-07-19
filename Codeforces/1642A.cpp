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

        int ans=0;
        
        if(y1==y2 && y3<y1) ans = abs(x1-x2);
        else if(y1==y3 && y2<y1) ans = abs(x1-x3);
        else if(y2==y3 && y1<y2) ans = abs(x2-x3);

        cout<<ans<<endl;
    }
    return 0;
}