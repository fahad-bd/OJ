/*

Created by Fahad Ahammed
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    while(n){
        int a;
        cin>>a;
        if(a>65) cout<<"Overload\n";
        else if(a<35) cout<<"Underload\n";
        else cout<<"Normal\n";
        n--;
    }
    return 0;
}