#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;{
        int count=0;
        int row=n%10;
        while(n>0){
            n/=10;
            count++;
        }
        if(count==1)
            cout<<(row*10)-10+1<<endl;
        if(count==2)
            cout<<(row*10)-10+3<<endl;
        if(count==3)
            cout<<(row*10)-10+6<<endl;
        if(count==4)
            cout<<(row*10)-10+10<<endl;
    }
    }

}
