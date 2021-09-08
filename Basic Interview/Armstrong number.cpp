#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int num=n;
	int c=0,r=0,sum=0;
	while(num!=0){
	    num=num/10;
	    c++;
	}
	num=n;
	while(num!=0){
	    r=num%10;
	    sum=sum+(pow(r,c));
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
