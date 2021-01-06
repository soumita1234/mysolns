#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int arr[N];
int main() {
    ios_base ::sync_with_stdio(0); cin.tie(0);
    int n, p;
    cin >> n >> p;
    for(int i = 1; i <= n; ++i) {
        int x, r;
        cin >> x >> r;
        arr[max(0, x - r)]++;
        arr[min(p + 1, x + r + 1)]--;
    }
    int count = arr[0] != 1, ans = 0;
    for(int i = 1; i <= p; ++i) {
        arr[i] += arr[i - 1];
        if(arr[i] == 1) {
            count = 0;
        }
        else {
            count++;
        }
        ans = max(count, ans);
    }
    cout << ans;
}
