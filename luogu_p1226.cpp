#include<iostream>
using namespace std;
//快速幂(模版)
int fast_v(long long base ,long long exp,long long mod){
    long long result =1;
    base %= mod;
    while (exp > 0){
        if(exp%2==1){
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    cout<<x<<"^"<<y<<" mod "<<z<<"="<<fast_v(x,y,z);
    return 0;
}
