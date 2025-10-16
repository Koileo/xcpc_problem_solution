#include<iostream>
using namespace std;

int main() {
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n + 1);
    for (int i = 0; i <= n; ++i) cin >> a[i];

    bool printed = false; // 是否已经输出过一项
    for (int i = 0; i <= n; ++i) {
        long long c = a[i];
        int p = n - i;              // 幂次：从 n 到 0
        if (c == 0) continue;

        // 符号
        if (!printed) {
            if (c < 0) cout << "-";
        } else {
            cout << (c < 0 ? "-" : "+");
        }

        long long abs_c = llabs(c);

        // 系数与变量部分
        if (p == 0) {
            // 常数项：直接打印数值
            cout << abs_c;
        } else {
            // 变量项
            // 系数为 1 时省略“1”
            if (abs_c != 1) cout << abs_c;

            // 变量与幂
            cout << "x";
            if (p != 1) cout << "^" << p;
        }

        printed = true;
    }

    if (!printed) cout << 0;
    cout << "\n";
    return 0;
}
