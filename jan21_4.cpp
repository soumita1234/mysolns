#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#define ll long long int
#define for0(i, n) for(int i=0;i<n;i++)
#define for1(i, n) for(int i=1;i<=n;i++)
using namespace std;
//Soumita Biswas
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int tc;
     cin>>tc;
     while(tc--){
     //Code goes here
     ll n,k,x,y;
     cin>>n>>k>>x>>y;
     vector<pair<ll,ll> >v;
     if(x==y)
     cout<<n<<" "<<n<<endl;
     else{
         if(x<y){
             v.push_back(make_pair(x+n-y,n));
             v.push_back(make_pair(n,n-y+x));
             v.push_back(make_pair(y-x,0));
             v.push_back(make_pair(0,y-x));

         }
         else{
             v.push_back(make_pair(n,y+n-x));
             v.push_back(make_pair(y+n-x,n));
             v.push_back(make_pair(0,x-y));
             v.push_back(make_pair(x-y,0));
         }
         cout<<v[(k-1)%4].first<<" "<<v[(k-1)%4].second<<endl;
     }
     }
return 0;
}

