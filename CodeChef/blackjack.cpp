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
        int a, b;
        cin>>a>>b;
        int n = a+b;
        if(21-n <= 10) cout<<21-n<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}