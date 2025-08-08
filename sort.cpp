#include<iostream>
using namespace std;
//冒泡排序
int popp(){
    char a[5];
    for(int i=0;i<5;i++){
        for (int j=0;j<4;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
//选择排序
int selection(){
    char a[5];
    for (int i=0;i<5;i++){
        int minindex=i
        for(int j=i+1;j<5;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        swap(a[i],a[minindex])
    }
}