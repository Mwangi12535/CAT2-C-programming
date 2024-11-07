//2D array
#include<stdio.h>
int main(){
int i,j;
int marks [2][2]={{{65,92},{84,72}},{35,70},{59,67}};
for(i=0;i<4;i++){
for(j=0;j<2;j++)
printf("marks[%d][%d]=%d\n",i,j, marks[i][j]);
}
return 0;
}