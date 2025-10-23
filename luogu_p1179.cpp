#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int l,r;
    cin>>l>>r;
    int result = 0;
    for(int i =l;i<=r;i++){
        string s = to_string(i);
        for(int j = 0;j< s.length();j++){
            if (s[j] == '2'){
                result++;
            }
        }
    }
    cout<<result;
    return 0;
}
