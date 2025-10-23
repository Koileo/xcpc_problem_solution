#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string &a){
    int l = 0, r = a.length() - 1;
    while(l < r){
        if(a[l] != a[r]) return false;
        l++; r--;
    }
    return true;
}

bool is_increasing(const string &a){
    for(int i = 0; i + 1 < a.length(); i++){
        if(a[i] > a[i+1]) return false;
    }
    return true;
}

int main() {
    int n, en;
    cin >> n;
    while(n--){
        cin >> en;
        string a;
        cin >> a;
        bool flag = false;
        for(int j = 0; j < (1 << en); j++){
            string b, c;
            string index_num;
            //mask的二进制 遍历！！！
            for(int k = 0; k < en; k++){
                if(j & (1 << k)){
                    c += a[k];
                    index_num += to_string(k+1) + " "; 
                }else{
                    b += a[k];
                }
            }

            if (is_palindrome(b) && is_increasing(c)){
                cout << c.length() << endl;
                cout << index_num << endl;
                flag = true;
                break;
            }
        }

        if(!flag){
            cout << -1 << endl;
            cout << endl;
        }
    }
    return 0;
}
