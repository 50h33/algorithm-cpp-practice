#include <bits/stdc++.h>
using namespace std;
int a[14], cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    // 방법 1 : for문 활용
	// for (int i = 0; i < 10; i++) {
    //     cin >> a[i];
    //     a[i] %= 42;
    //     bool flag = 1;
    //     for (int j = 0; j < i; j++) {
    //         if (a[i] == a[j]) flag = 0;
    //     }
    //     if (flag) cnt++;
    // }
    // cout << cnt << "\n";

    // 방법 2 : set 활용
    set<int> s;
    
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        s.insert(x % 42);
    }

    cout << s.size() << '\n';
    return 0;
}