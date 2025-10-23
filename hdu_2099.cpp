#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b;
    while(cin>>a>>b){
        if(a==0 && b==0){
            break;
        }
        if(a % b == 0){
            int i = 0;
            while(i*b < 100){
                if(i == 0){
                    cout<<"00 ";
                }else{
                    cout<<i*b<<' ';
                }
                i++;
            }
        }else{
            int chu = a % b * 100;
            for(int i = 1;i < 100;i++){
                if((chu + i) % b == 0){
                    if(i < 10){
                        cout<<'0'<<i<<' ';
                    }else{
                        cout<<i<<' ';
                    }
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
