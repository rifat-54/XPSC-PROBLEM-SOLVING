#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // টেস্ট কেসের সংখ্যা

    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long ans = 0;

        for (long long x = l1; x <= r1; x++) {
            long long y = x;  // \( y \) এর শুরুতে \( x \) দিয়ে শুরু হবে
            while (y <= r2) { 
                if (y >= l2) ans++;  // যদি \( l2 \leq y \leq r2 \), তাহলে কাউন্ট বাড়াও
                if (y > r2 / k) break;  // ওভারফ্লো বা \( y \)-এর মান বড় হয়ে গেলে লুপ বন্ধ
                y *= k;  // \( y \)-এর মান আপডেট কর
            }
        }

        cout << ans << '\n';  // প্রতিটি টেস্ট কেসের ফলাফল
    }

    return 0;
}
