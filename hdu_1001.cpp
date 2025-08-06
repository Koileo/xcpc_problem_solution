#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        long long sum = n * (n + 1LL) / 2;
        cout << sum << endl << endl;
    }
    return 0;
}