#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

ll x;
int n, k;
vector<ll> a;

bool check(ll d){
    ll cnt = 0;
    vector<ll> v = a;
    v.push_back(x + d * 2); // 哨兵点
    for(int i = 0; i < (int)v.size() - 1; i++){
        ll L = (i == 0 ? 0 : a[i-1] + d);
        ll R = v[i] - d;
        if(L <= R) cnt += (R - L) / d + 1;
        if(cnt >= k) return true;
    }
    return cnt >= k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(cin >> n >> k >> x){
        a.resize(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll l = 0, r = x, ans = 0;
        while(l <= r){
            ll mid = (l + r) >> 1;
            if(check(mid)) ans = mid, l = mid + 1;
            else r = mid - 1;
        }

        // 构造答案
        vector<ll> res;
        for(int i = 0; i <= n; i++){
            ll L = (i == 0 ? 0 : a[i-1] + ans);
            ll R = (i == n ? x : a[i] - ans);
            for(ll p = L; p <= R && res.size() < k; p += ans){
                res.push_back(p);
            }
        }

        // 如果 d = 0，特殊处理（均匀补到 k 个）
        if(ans == 0){
            res.clear();
            for(int i = 0; i < k; i++) res.push_back(i);
        }

        // 输出
        for(int i = 0; i < k; i++){
            cout << res[i];
            if(i + 1 < k) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
