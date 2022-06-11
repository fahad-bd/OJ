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
        int a,b;
        cin>>a>>b;

        for(int i=1;i<=b;i++){
            if((a*i)%b==0){
                cout<<i<<endl;
                break;
            } 
        }
    }
    return 0;
}