#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#define ll long long int
#define for0(i, n) for(int i=0;i<n;i++)
#define for2(i, m) for(int i=0;i<m;i++)
#define for1(i, n) for(int i=1;i<=n;i++)
using namespace std;
//Soumita Biswas
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
     //Code goes here
     int n,m;
     cin>>n>>m;
     int a[n];
     int b[m];
     for0(i, n)
     cin>>a[i];
     for2(i, m)
     cin>>b[i];
     int sa=0,sb=0,t,swap=0;
     int flag = 0;
     sa = accumulate(a, a+n, 0);
     sb = accumulate(b, b+m, 0);
     while(sa<=sb)
     {
         sort(a, a+n);
         sort(b, b+m);
         if(a[0]<b[m-1]){
            swap++;
            t=a[0];
            a[0]=b[m-1];
            b[m-1]=t;
         }
         else if(a[0]>=b[m-1]){
            flag =1;
            cout<<-1<<endl;
            break;
         }
         sa = accumulate(a, a+n, 0);
         sb = accumulate(b, b+m, 0);
     }
     if(flag==0)
        cout<<swap<<endl;
    }
return 0;
}
