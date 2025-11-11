#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int left = 0, right = n , uk = 0;
        for (char c : s) {
            if (c == '0') left++;
            else if (c == '1') right--;
            else uk++;
        }
        for(int i=1;i<=n;i++){
            if(k>=n) cout<<"-";
            else if(i>left+uk&&i<right-uk+1) cout<<"+";
            else if(i<=left||i>=right+1) cout<<"-";
            else cout<<"?";
        }
        cout << endl;

    }
    return 0;
}
