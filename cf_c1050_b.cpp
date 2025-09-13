#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum;
        sum=0;
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        cout<<(n+m)<<endl;
    }
    return 0;
}