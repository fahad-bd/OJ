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
        int a;
        cin>>a;
        int ans=1;

        if(a<=5) cout<<"0"<<endl;
        else if(a==6) cout<<"1"<<endl;
        else{
            ans=ans+(a-6)/7;
            cout<<ans<<endl;
        }
    }
    return 0;
}