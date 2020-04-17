//http://codeforces.com/contest/1335/problem/B

#include<iostream>
using namespace std;
int main(){
         int n,t,a,b;
         cin>>t;
         string s;
         while(t--){
                  s="";
                  cin>>n>>a>>b;
                  for(int i=0; i<n; i++){
                       s+= char(('a' + i%b));
                  }    
                  cout<< s <<"\n";
         }
}