#include<iostream>
#include<iomanip>
using namespace std;
int n;
int num[15];
bool used[15];
//DFS搜索+回溯
void search(int step){
    if(step == n){
        for(int i=0;i<n;i++){
            cout<<setw(5)<<num[i];
        }
        cout<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(!used[i]){
            num[step] = i;
            used[i] = true;
            search(step+1);
            used[i] = false;
        }
    }
}

int main(){
    cin>>n;
    search(0);
    return 0;
}