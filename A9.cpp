#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n; cin>> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    int  x = 1;
    int gift[n] = {0};
    for(int i = 0; i<n; i++){
        gift[arr[i]-1] = x++;
    }

    for(int i = 0; i<n; i++)
        cout<<gift[i]<<" ";


    return 0;
}
