#include<iostream>
using namespace std;
//冒泡排序
//把一个数字冒泡到最前或者最后
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
//选择最小的
int selection(){
    char a[5];
    for (int i=0;i<5;i++){
        int minindex=i
        for(int j=i+1;j<5;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        swap(a[i],a[minindex]);
    }
}
//插入排序
//类似入扑克牌
int inscerction(){
    char a[5];
    for(int i=1;i<5;i++){
        key =a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
//队排序
