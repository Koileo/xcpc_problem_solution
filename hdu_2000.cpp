#include<iostream>
using namespace std;
int main(){
    char a[5];
    while(cin>>a){
        for(int i=0;i<3;i++){
            for(int j=0;j<2-i;j++){
                if(a[j]>a[j+1]){
                    a[4] = a[j];
                    a[j] = a[i];
                    a[i] = a[4];
                }
            }
        }
        for(int f=0;f<3;f++){
            cout<<a[f]<<" ";
        }
        cout<<endl;
    }
    return 0;
}