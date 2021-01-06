#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   string s;
   int t;
   cin>>t;
   for(int i=1;i<=t;i++){

    cin>>s;

    int r=s.length();
    if(r>10){
        cout<<s[0]<<r-2<<s[r-1]<<endl;
    }

    else{
        cout<<s<<endl;
    }

   }
    return 0;
}
