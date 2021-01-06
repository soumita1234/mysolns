#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        int q=0;
        int arr[n];
        cin>>n>>k>>d;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            q+=arr[i];
        }
        int ans=q/k;
        int day=0;
        cout<<ans;
        if(ans>=d){
            cout<<d<<endl;
        }
        else if(ans<=d){
            cout<<ans<<endl;
        }
        else
            cout<<0<<endl;
    }
}
