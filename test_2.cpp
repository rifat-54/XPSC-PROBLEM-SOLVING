#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;

        long long val = M - N * B;
        long long diff = A - B;

        if (diff == 0) {
            cout << (M == N * A ? "Yes\n" : "No\n");
        } else if (val % diff == 0) {
            long long x = val / diff;
            if (x >= 0 && x <= N) cout << "Yes\n";
            else cout << "No\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
