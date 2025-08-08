#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    long long a,b;
    int i = 0;
    for (i =1;i<=num;i++){
        cin>>a>>b;
        cout<<"Case "<<i<<endl<<endl;
        cout<<a<<" + "<<b<<" = "<<(a+b)<<endl<<endl;
    }
    return 0;
}