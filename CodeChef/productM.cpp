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
        long long int b,c;
        cin>>b>>c;
        cout<<c/__gcd(b,c)<<endl;
    }
    return 0;
}