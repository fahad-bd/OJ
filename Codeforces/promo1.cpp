#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
   // vector<int>v(n);
   int arr[n];
    for(int i=0;i<n;i++){
      //  int a;
      //  cin>>a;
      //  v.push_back(a);
      cin>>arr[i];
    }
   // sort(v.begin(),v.end());
    sort(arr,arr+n,greater<int>());
    //cout<<"Q= "<<q<<endl;

    while(q--){
        int m,n;
        cin>>m>>n;
        m--,n--;
        int sum=0;
        for(int i=n;i<=m;i++){
           // cout<<"m= "<<m<<" n= "<<n<<endl;

            sum=sum+arr[i];
          //  cout<<"sum "<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}