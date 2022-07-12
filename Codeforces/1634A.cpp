#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string r=s;
        reverse(r.begin(),r.end());
        if(s==r or k==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}