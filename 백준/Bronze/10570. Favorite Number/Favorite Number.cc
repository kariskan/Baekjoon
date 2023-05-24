#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> ma;
        int cnt = 0, ans = 1001;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ma[a]++;
            if (cnt < ma[a] || (cnt == ma[a] && ans > a)) {
                cnt = ma[a];
                ans = a;
            }
        }
        cout << ans << '\n';
    }
}