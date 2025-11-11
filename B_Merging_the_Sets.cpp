#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> a[50010];
int l[50010];
int coc[100010];
bool ism[50010];

signed main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= m; i++)
			coc[i] = 0;
		for (int i = 1; i <= n; i++) {
			cin >> l[i];
			a[i].clear();
			ism[i] = 0;
			for (int j = 1; j <= l[i]; j++) {
				int p;
				cin >> p;
				a[i].push_back(p);
				coc[p]++;
			}
		}
		bool f = 1;
		for (int i = 1; i <= m; i++)
			if (coc[i] == 0)
				f = 0;
		if (!f) {
			cout << "NO\n";
			continue;
		} // 0
		int ccc = 0;
		for (int i = 1; i <= n; i++) {
			bool ff = 0;
			for (int j = 0; j < l[i]; j++){
                if (coc[a[i][j]] == 1){
                    ff = 1;
                }
            }
			ism[i] = ff;
			if (ism[i] == 0){
                ccc++;
            }
		}
		if (ccc <= 1) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		continue;
	}
	return 0;
}
