#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int c=0;
int i=1;
for(;;){
    if(m-i==0)
        break;
    if(n-i==0)
       break;
    i++;
    c++;

}
if(c%2==0)
    cout<<"Akshat"<<endl;
else
    cout<<"Malvika"<<endl;

}
