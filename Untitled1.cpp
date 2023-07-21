#include<bits/stdc++.h>
using namespace std;

int main(){
	char lett='A';
	int n=5;
	
	for(int i = 0;i<n;i++){
		for(int j=1;j<n-i;j++){
			cout<<" ";
		}
		for(char ch='A';ch<='A'+i;ch++){
			cout<<ch;
				
		}
		for(char ch='A'+i-1;ch>='A';ch--){
			cout<<ch;
				
		}
		for(int j=0;j<n;j++){
			
		}
		for(int j=1;j<n-i;j++){
			cout<<" ";
		}
		cout<<endl;	
	}
}