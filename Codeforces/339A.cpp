#include<iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = (int) s.size();
    
    int arr[n+1];
    for(int i=0;i<=n;i++)arr[i]=-1;
    int j=0;
    for(int i=0;i<n;i=i+2){
        arr[j]=s[i]-48;
        j++;
    }
    
  /*  for(int i=0;i<n;i++){
        if(arr[i]>=0) cout<<arr[i]<<" ";
    }
    */
    //cout<<s<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>=0){
                if(arr[i]<arr[j]){
                    int temp = arr[i];
                    arr[i]= arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    
  //  for (int i=0; i<n; i++) {
  //      cout<<arr[i]<<" ";
  //  }
    
    for(int i=0;i<n;i++){
        if(arr[i]>=0) cout<<arr[i];
        if(arr[i+1]>0)cout<<"+";
    }

    cout<<endl;
    return 0;
}
