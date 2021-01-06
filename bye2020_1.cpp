#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        set<float> s;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                float res=(float)abs(arr[i]-arr[j])/(float)2;
                s.insert(res);
            }
        }
       cout<<s.size()<<endl;
    }


}
