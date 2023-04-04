#define ROWS 2
#define COLS 3
#include <stdio.h>
#include <stdlib.h>
int main(){
int m[ROWS][COLS] = {{11, 12, 13},
                     {21, 22, 33}};
int i=0,j=0;
int min=m[0][0],max=0;
int i_min_index=0,j_min_index=0;
int i_max_index=0,j_max_index=0;                  
for (j=0;j<COLS;j++){
  for (i=0;i<ROWS;i++){
    if (m[i][j]>max){
      max=m[i][j];
      i_max_index=i;
      j_max_index=j;}
    if (m[i][j]<min){
      min=m[i][j];
      i_min_index=i;
      j_min_index=j;} 
    printf(" %d",m[i][j]);}
  printf("\n");}
printf("Maximal number is %d [%d,%d]\n",max,i_max_index,j_max_index);
printf("Minimal number is %d [%d,%d]\n",min,i_min_index,j_min_index);}
