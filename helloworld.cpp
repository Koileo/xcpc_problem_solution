#include<stdio.h>
#include<math.h>
int main(){
    float r,h;
    float pi;
    pi = 3.1415926;
    scanf("%f%f",&r,&h);
	float s1,s2;
    s1 = pi*r*r;
    s2 = 2*pi*r*h;
    printf("%f\n",s1+s1+s2);
    return 0;
}