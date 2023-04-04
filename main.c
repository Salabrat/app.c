#define ROWS 2
#define COLS 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int m[ROWS][COLS] = {{11, 12, 13},
                     {21, 22, 33}};

int i=0,j=0;                   
for (i=0;i<ROWS;i++){
  for (j=0;j<COLS;j++){
    if (j==COLS-1)
      m[i][j]=i+j;
    printf(" %d",m[i][j]);}
  printf("\n");}}
