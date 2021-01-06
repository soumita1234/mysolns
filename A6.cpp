#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0,sum1=0,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+n);
        for(int j=n-1;j>=0;j--){
            sum1+=a[j];
            c++;
            if(sum<sum1)
                break;

        }
        cout<<c<<endl;
}
