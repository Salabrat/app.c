#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int obr(int n){
    if (n==1) printf("Yes");
     else if(n==2) printf("No");
      else if(n==3) printf("Cancel");}
int main(){
    int a;
    printf("Enter number 1,2 or 3 \n");
    scanf("%d",&a);
    obr(a);}

