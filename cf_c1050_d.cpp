#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<long long> &arr, int l, int r) {
    if (l >= r) return;
    long long pivot = arr[(l + r) / 2];
    int i = l, j = r;
    while (i <= j) {
        while (arr[i] > pivot) i++;
        while (arr[j] < pivot) j--;
        if (i <= j) {
            long long tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++, j--;
        }
    }
    if (l < j) quicksort(arr, l, j);
    if (i < r) quicksort(arr, i, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<long long> odds;
        long long evens_sum = 0;

        for(int i = 0; i < n; i++){
            long long a; 
            cin >> a;
            if(a % 2 == 0) {
                evens_sum += a;
            } else {
                odds.push_back(a);
            }
        }

        if(odds.empty()){
            cout << 0 << "\n";
            continue;
        }

        quicksort(odds, 0, (int)odds.size() - 1);

        int m = odds.size();
        int take = (m + 1) / 2;
        long long odd_sum = 0;
        for(int i = 0; i < take; i++) {
            odd_sum += odds[i];
        }

        cout << evens_sum + odd_sum << "\n";
    }
    return 0;
}
