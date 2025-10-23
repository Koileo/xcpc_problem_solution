#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
bool caiquan(int a,int b){
    if(a == 0){
        if(b == 1){
            return false;
        }else if(b == 2){
            return true;
        }else if(b == 3){
            return true;
        }else if(b == 4){
            return false;
        }
    }else if(a == 1){
        if(b == 0){
            return true;
        }else if(b == 2){
            return false;
        }else if(b == 3){
            return true;
        }else if(b == 4){
            return false;
        }
    }else if(a == 2){
        if(b == 0){
            return false;
        }else if(b == 1){
            return true;
        }else if(b == 3){
            return false;
        }else if(b == 4){
            return true;
        }
    }else if(a == 3){
        if(b == 0){
            return false;
        }else if(b == 1){
            return false;
        }else if(b == 2){
            return true;
        }else if(b == 4){
            return true;
        }
    }else if(a == 4){
        if(b == 0){
            return true;
        }else if(b == 1){
            return true;
        }else if(b == 2){
            return false;
        }else if(b == 3){
            return false;
        }
    }
}
int main() {
    int n,na,nb;
    cin>>n>>na>>nb;
    int result1 = 0,result2 = 0;
    int a[na],b[nb];
    for(int i = 0;i < na;i++){
        cin>>a[i];
    }
    for(int i = 0;i < nb;i++){
        cin>>b[i];
    }
    for(int i = 0;i < n;i++){
        if(a[i%na] == b[i%nb]){
            continue;
        }else{
            if(caiquan(a[i%na],b[i%nb])){
                result1++;
            }else{
                result2++;
            }
        }
    }
    cout<<result1<<' '<<result2;
    return 0;
}
