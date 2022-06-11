#include<bits/stdc++.h>
using namespace std;

bool compire(int a, int b){
	return a>b;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vp;
		vector<int> vn;

		int pSum=0, nSum = 0;

		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a<0) a=a*(-1);

			if(i%2==0) vn.push_back(a);
			else vp.push_back(a);
		}

cout<<endl;
		cout<<"element vn: ";
		for(int i=0; i<vn.size();i++){
			
			cout<<vn[i]<<' ';
		}
cout<<endl;
		cout<<"element vp: ";
		for(int i=0; i<vp.size();i++){
			
			cout<<vn[i]<<' ';
		}
cout<<endl;
/*
		cout<<endl;

		sort(vp.begin(),vp.end());
		sort(vn.begin(),vn.end(),compire);

		for(int i=0; i<vp.size();i++){
			pSum+=vp[i];
		}

		for(int i=0; i<vn.size();i++){
			nSum+=vn[i];
		}

		cout<<"element vn: ";
		for(int i=0; i<vn.size();i++){
			
			cout<<vn[i]<<' ';
		}

		cout<<"element vp: ";
		for(int i=0; i<vp.size();i++){
			
			cout<<vn[i]<<' ';
		}



		cout<<"Oth position: ";

		cout<<vp[0]<<' '<<vn[0]<<endl;

		cout<<"Sum : ";

		cout<<pSum<<' '<<nSum<<endl;


		if(vp[0]<vn[0]){
			cout<<pSum-vp[0]+vn[0]-nSum<<endl;
		}
		else cout<<pSum-nSum<<endl;

		*/

	}
	
	return 0;
}
