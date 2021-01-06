#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    int arr[200],brr[200];
    cin>>t;
    while(t--){
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>m;

        for(int j=0;j<m;j++){
            cin>>brr[j];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++)
            if(arr[i]!=brr[j]){
                cout<<brr[j]<<endl;
            }
        }

    }
	//code
	return 0;
}
