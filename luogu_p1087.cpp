#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int n;
int num[100];
string tree[1048576];
void trees(string s, int dotin) {
    int length = s.size();
    int sum = 0;
    for(char c : s) sum += c - '0';

    string dot;
    if(sum == length) dot = "I";
    else if(sum == 0) dot = "B";
    else dot = "F";

    tree[dotin] = dot;

    if(length == 1) return;

    string left = s.substr(0, length/2);
    string right = s.substr(length/2);
    trees(left, dotin*2);
    trees(right, dotin*2+1);
}

void postorder(int idx) {
    if(tree[idx].empty()) return;
    postorder(idx*2);
    postorder(idx*2+1);
    cout<<tree[idx];
}

int main(){
    cin>>n;
    int length=2;
    for(int i =1;i<n;i++){
        length = length *2;
    }
    string x;
    cin>>x;
    trees(x,1);
    postorder(1);
    return 0;
}