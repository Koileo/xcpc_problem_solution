#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    int num = 0; 
    
    for (double i = -100.00; i <= 100.00; i += 0.001) {
        double l = i, r = i + 0.001;
        double fl = a * l * l * l + b * l * l + c * l + d;
        double fr = a * r * r * r + b * r * r + c * r + d;
        
        if (fl * fr < 0) {
            printf("%.2f ", i);
            num++;
        }
        if (num == 3) {
            break;
        }
    }
    return 0;
}
