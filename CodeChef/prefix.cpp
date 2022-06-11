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
        int n,k;
        cin>>n>>k;
        int arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    return 0;
}