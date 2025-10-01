#include<iostream>
#include<vector>
using namespace std;
//国王游戏（邻项交换贪心）
//P1080
int main(){
    int n;
    cin>>n;
    int gl,gr;
    cin>>gl>>gr;
    long long l[n],r[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if((l[j]*r[j])>(l[j+1]*r[j+1])){
                swap(l[j],l[j+1]);
                swap(r[j],r[j+1]);
            }
        }
    }
    long long prefix = gl;
    long long ans = 0;
    for(int i=0; i<n; i++){
        long long reward = prefix / r[i];
        if(reward > ans) ans = reward;
        prefix *= l[i];
    }
    cout<<ans;
    return 0;
}