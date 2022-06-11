#include"/Users/local/include/bits/stdc++.h"
using namespace std;
int main()
{
    int long long n,x;
    cin>>n;
    int arr[200]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        int y=x%200;
        arr[y]++;
    }
    int ans=0;
    for (int i = 0; i < 200; i++)
    {
        int k=arr[i]/2;
        ans+=k;      
    }
    cout<<ans*ans<<endl;
    
    return 0;
}