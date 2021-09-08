#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a=0;
	int sum=0;
	int num=n;
	while(num!=0){
	    a=num%10;
	    sum=(sum*10)+a;
	    num=num/10;
	}
	if(sum==n){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	
	return 0;
}
