#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	char s[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>s[i][j];
		}
	}

	int flag = 0;
	int count;

	for(int i=0;i<n;i++){
		count = 0;
		for(int j=0;j<6+i && j<n;j++){
			if(s[i][j] == '#'){
				count++;
			}
		}
		if(count >= 4) {
			cout<<"Yes\n";
			flag = 1;
			break;
		}
	}

	//cout<<flag<<endl;

	if(flag == 0){
		for(int i=0;i<n;i++){
		count = 0;
		for(int j=0;j<6+i && j<n;j++){
			if(s[j][i] == '#'){ 
				count++;
			}
		}
		if(count >= 4) {
			cout<<"Yes\n";
			flag = 1;
			break;
		}
	}
	}

	//cout<<flag<<endl;

	if(flag == 0){
		for(int i=n-1;i>=0;i--){
			count=0;
			int k=0;
			for(int j=n-1;k<6;j--){
				if(s[i][j] == '#'){
					count++;
				}
				k++;
			}
			if(count >= 4){
				cout<<"Yes\n";
				flag = 1;
				break;
			}
		}
	}
	
	if(flag == 0){
		for(int i=n-1;i>=0;i--){
			count=0;
			int k =0;
			for(int j=n-1;k<6;j--){
				if(s[j][i] == '#'){
					count++;
				}
				k++;
			}
			if(count >= 4){
				cout<<"Yes\n";
				flag = 1;
				break;
			}
		}
	}

	//cout<<flag<<endl;

	if(flag == 0){
		for(int i=0; i<n; i++){
			count = 0;
			int p = i;
			for(int j=0;j<6+i && j<n;j++){
				if(s[i][j] == '#'){
					count++;
				}
				i++;
			}
			if(count >= 4){
				cout <<"Yes\n";
				flag = 1;
				break;
			}
			i = p;
		}
	}

	//cout<<flag<<endl;

	if(flag == 0){
		for(int i=0; i<n; i++){
			count = 0;
			int p = i;
			for(int j=0;j<6+i && j<n;j++){
				if(s[j][i] == '#'){
					count++;
				}
				i++;
			}
			if(count >= 4){
				cout <<"Yes\n";
				flag = 1;
				break;
			}
			i = p;
		}
	}

	//cout<<flag<<endl;

	if(flag == 0){
		for(int i=0; i<n; i++){
			count = 0;
			int p = i;
			int k=0;
			for(int j=n-1;k<6;j--){
				if(s[i][j] == '#'){
					count++;
				}
				i++;
				k++;
			}
			if(count >= 4){
				cout <<"Yes\n";
				flag = 1;
				break;
			}
			i = p;
		}
	}

	//cout<<flag<<endl;

	if(flag == 0){
		for(int i=0; i<n; i++){
			count = 0;
			int p = i;
			int k = 0;
			for(int j=n-1;k<6;j--){
				if(s[j][i] == '#'){
					count++;
				}
				i++;
				k++;
			}
			if(count >= 4){
				cout <<"Yes\n";
				flag = 1;
				break;
			}
			i = p;
		}
	}

	//cout<<flag<<endl;
	if(flag == 0) cout<<"No\n";

	return 0;
}