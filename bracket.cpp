#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int main(){

ll t;

cin>>t;

while(t--){

string s;

cin>>s;
ll n;
n=s.size();

if(n%2!=0 || s[0]==')' || s[n-1]=='('){

cout<<"NO"<<endl;}

else {

cout<<"YES"<<endl;

}
}
return 0;
}

