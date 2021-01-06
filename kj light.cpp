#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,p;
    cin>>n>>p;
    //n=no of light
    //p=house distance in x axis
    ll arr[p+1];
    for(ll i=0;i<=p;i++){
        arr[i]=0;
    }
    ll x,r;
    //x=index of light
    //r=characterstics
    for(ll i=0;i<n;i++){
    cin>>x>>r;
    if(x-r>=0){
        arr[x-r]++;
    }
    else
        arr[0]++;
    }
    if(x+r+1<=p){
        arr[x+r+1]--;
    }
    for(ll i=1;i<=p;i++){
        arr[i]+=arr[i-1];
    }
    ll c=0,ans=0;
    for(ll i=0;i<=p;i++){
        c=0;
        while(arr[i]!=0 && i<=p){
            c++;
            i++;
        }
    ans=max(ans,c);
    }
    cout<<ans<<endl;
    return 0;
}
