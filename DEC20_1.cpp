#include <bits/stdc++.h>

using namespace std;
int main() {

        int d1,v1,d2,v2,p;
        cin>>d1>>v1>>d2>>v2>>p;
        int sums=0,flag=0;
        if(d1<d2){
            int days=d1-1;
            while(sums<p){
                sums+=v1;
                if(d1==d2 || flag==1){
                    sums+=v2;
                    flag=1;
                }
                d1++;
                days++;
            }
            cout<<days<<endl;
        }
        else{
            int days=d2-1;
            while(sums<p){
                sums+=v2;
                if(d1==d2 || flag==1){
                    sums+=v1;
                    flag=1;
                }
                d2++;
                days++;
            }
            cout<<days<<endl;

        }



    return 0;
}
