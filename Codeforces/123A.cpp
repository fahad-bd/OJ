/*

Created by Fahad Ahammed
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int r=0,g=0,b=0;
        int temp = 0;
        if(s[0]>='A' && s[0]<='Z'){
            cout<<"NO\n";
        }

        else{
            for(int i=0;i<6;i++){
                if(s[i]=='r') r=1;
                else if(s[i]=='b') b=1;
                else if(s[i]=='g') g=1;
                else if(s[i]=='R'){
                    if(r!=1) {
                        temp = 1;
                        break;
                    }
                }
                else if(s[i]=='G'){
                    if(g!=1){
                        temp = 1;
                        break;
                    }
                }
                else if(s[i]=='B'){
                    if(b!=1){
                        temp = 1;
                        break;
                    }
                }
            }


        if(temp == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        }


    }
    return 0;
}