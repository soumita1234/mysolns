#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
            else;
            no_risk++;
        }
        int days=0;
        days= days + ceil((double)risk/D);
        days+= ceil((double)no_risk/D);
        cout<<days<<endl;
        }
        return 0;
}

