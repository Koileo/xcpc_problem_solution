#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int num[1000] = {0};
int n;
string a[1000];
int maxlen = 0;
int result = 0;
int overlap(const string &a, const string &b) {
    int alen = a.length(), blen = b.length();
    for (int i = 1; i < min(alen, blen); i++) {
        if (a.substr(alen - i, i) == b.substr(0, i)) {
            if (i < alen && i < blen)
                return i;
        }
    }
    return 0;
}

void dfs(int now, int curr_len) {
    maxlen = max(maxlen, curr_len);
    for (int i = 0; i < n; i++) {
        if (num[i] >= 2) continue; // 最多两次
        int over = overlap(a[now], a[i]);
        if (over > 0) {
            num[i]++;
            dfs(i, curr_len + a[i].length() - over);
            num[i]--;
        }
    }
}
int main() {
    char first;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    cin >> first;
    for(int i = 0;i < n;i++){
        if(a[i][0] == first){
            dfs(i,a[i].length());
            break;
        }
    }
    cout<<maxlen;
    return 0;
}