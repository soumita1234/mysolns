#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<0<<" "<<1<<" ";
	int n1=0,n2=1,n3;
	for(int i=2;i<n;i++){
	    n3=n1+n2;
	    cout<<n3<<" ";
	    n1=n2;
	    n2=n3;
	}
	return 0;
}
