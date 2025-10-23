#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        bool isSkip=false;
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        int num=1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int sum=1;
        for(int j=0;j<n;j++){
            num = 0;
            if(a[j]>b[j]){
                num=a[j]-b[j];
            }
            sum = sum+num;
        }
        cout<<sum<<endl;
    }
    return 0;
}