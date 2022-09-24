#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;


bool check(vector<ll>& arr, ll n, ll diff, ll cows) {

    ll prev = arr[0];
    ll curr_cows = 1;

    for (int i = 1;i < n;i++) {

        if (arr[i] - prev >= diff) {
            curr_cows++;
            prev = arr[i];
        }
        if (cows == curr_cows) break;
    }
    return curr_cows == cows;
}

void solve() {
    int stalls_cnt, cows;
    cin >> stalls_cnt >> cows;

    vector<ll> stalls(stalls_cnt);
    for (int i = 0;i < stalls_cnt;i++) {
        cin >> stalls[i];
    }

    sort(stalls.begin(), stalls.end());
    if (stalls_cnt == 2) {
        cout << stalls[stalls_cnt - 1] - stalls[0] << endl;
    }
    else {
        ll low = 1, high = 1e9;
        ll ans = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

           if (check(stalls, stalls_cnt, mid, cows)) {
                ans = max(ans, mid);
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}