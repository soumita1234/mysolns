#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,D;
        cin>>N>>D;
        int arr[N];
        for(int j=0;j<N;j++)
        cin>>arr[j];
        int risk=0,no_risk=0;
        for(int j=0;j<N;j++){
            if(arr[j]>=80 || arr[j]<=9)
            risk++;
            else
            no_risk++;
        }
        int day=0;
        day= day + ceil((double)risk/D);
        day+= ceil((double)no_risk/D);
        cout<<day<<endl;
    }
    return 0;
}
