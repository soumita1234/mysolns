#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    bool isprime=true;
    if(n==0||n==1){
        isprime=false;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
    
	return 0;
}
