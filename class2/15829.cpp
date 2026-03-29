#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1234567891; 
int l;
string s;
ll num, r = 1, ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> l >> s;

    for (int i = 0; i < l; i++) {
        num = (s[i]-'a'+1) % MOD;
        ans = (ans + num * r) % MOD;
        r = (r * 31) % MOD;
    }
    cout << ans << "\n";
}