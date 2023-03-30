#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fibo(int n){
    if (n==1 || n==2) {
        return 1;} 
        else {
        return fibo(n-1) + fibo(n-2);}}

int main(){
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    b=fibo(a);
    printf("The fibonacci number is %d",b);}