#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    long long total = 0;

    for (long long x : A) {
        total += x;
    }

    long long SR = 0;
    long long ans = 0;

    for (int k = 1; k <= n / 2; k++) {

        SR += A[k - 1];

        long long CR = k;
        long long CB = n - k;

        long long SB = total - SR;

        long long current = SR * CB + SB * CR;

        ans = max(ans, current);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}