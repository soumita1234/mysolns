#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define ll long long int
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t,
     cin>>t;
     while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        if(w%2!=0 && h%2!=0){
                if(n==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }


     }


return 0;
}


