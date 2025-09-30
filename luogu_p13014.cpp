#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a<b){
        swap(a,b);
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int n,q;
    int inx =0 ;
    cin>>n>>q;
    int a[n+1];
    int b[100005];//去重
    long long x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(b[x]==1){
            continue;
        }else{
            a[inx] =x;
            b[x] = 1;
            inx++;
        }
    }
    n=inx;
    for(int i=1;i<=q;i++){
        int num = a[0]+i;
        for(int j=1;j<n;j++){
            num = gcd(num,a[j]+i);
            if (num==1){
                break;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}