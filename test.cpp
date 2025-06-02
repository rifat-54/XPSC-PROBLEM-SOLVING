#include <bits/stdc++.h>
using namespace std;

int get_min_time(vector<int> &a) {
    int n = a.size();
    sort(a.begin(), a.end()); // sort HPs for easier counting
    int answer = n; // worst case: kill all one by one

    for (int i = 0; i < n; i++) {
        int x = a[i]; // try x as damage-all count
        // count how many monsters will survive after x damage
        int survivors = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] > x) survivors++;
        }
        int total_time = x + survivors;
        answer = min(answer, total_time);
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << get_min_time(a) << "\n";
    }

    return 0;
}
