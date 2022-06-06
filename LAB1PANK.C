#include<stdio.h>
#include<conio.h>
int main(){
int a[10][10],b[10][10],r,c,i,j,k;
printf("ENTER THE NUMBER OF ROWS AND COLUMN=");
scanf("&d",&r,&c);
printf("ENTER THE MATRICES=\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("&d",&a[i][j]);
}}
//COMPUTING THE TRANSPOSE OF THE MATRICES
for(i=0;i<r;i++){
for(j=0;j<c;j++){
b[j][i]=a[i][j];
}}
//transpose of the matrices
printf("\n transpose of the matrice");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d",b[i][j]);
if(i==r-1)
printf("\n");
return 0;
}}

