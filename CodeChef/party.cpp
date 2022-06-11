/*

Created by Fahad Ahammed
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+c)>b) cout<<a+c<<endl;
        else cout<<b<<endl;
    }
    return 0;
}