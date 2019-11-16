#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,cnt=0;
		cin>>n;
		string str1,str2;
		cin>>str1;
		for(int i=0;i<n-1;i++){
			cin>>str2;
			for(int j=0; j<str2.length(); j++){
				if(str1[j] - str2[j] == 1 || str1[j] - str2[j] == -1)
					str1[j] = '1';
				else
					str1[j] = '0';
			}
		}
		
		for(int i=0; i<str1.length(); i++)
			if(str1[i] == '1')
				cnt++;
				
		cout<<cnt<<"\n";
	}
}
