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
        int d, w;
        cin>>d>>w;
        int arr[d+5];
        for(int i=0;i<d;i++){
            cin>>arr[i];
        }
        sort(arr,arr+d,greater<int>());

        int sum = 0;
        for(int i=0;i<d;i++){
            sum+=arr[i];
            if(sum>=w){
                cout<<d-i-1<<endl;
                break;
            }
        }
    }
    return 0;
}