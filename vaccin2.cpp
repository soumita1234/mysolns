#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d; //no of people and people per day vaccinated
        int k=0,c=0,m=0;
        cin>>n>>d;
        int ans=0;
        int arr[n];
        for(int i=0;i<n;i++){
           cin>>arr[i];

        }
        for(int j=0;j<n;j++){
            if(arr[j]<=9 || arr[j]>=80){
                k++;
            }
            else{
                c++;
            }
        }
        for(int b=0;b<n;b++){
            if(k>=1){
                k=k-d;
                m++;
            }
            else if(c>=1){
                c=c-d;
                m++;
            }
           if(k<=0 && c<=0){
            break;
           }
        }
        cout<< m;
        k=0;
        c=0;
        m=0;

    }
    return 0;
}
