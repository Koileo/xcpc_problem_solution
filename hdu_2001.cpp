#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    double x1,x2,y1,y2;
    while(cin>>x1>>y1>>x2>>y2){
        double chax = x1-x2;
        double chay = y1-y2;
        double result = sqrt(chax * chax + chay * chay);
        printf("%.2f",result);
    }
    return 0;
}
