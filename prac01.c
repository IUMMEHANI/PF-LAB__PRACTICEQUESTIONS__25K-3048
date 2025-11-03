#include <stdio.h>
int main(){
float A[3][3],T[3][3],Cof[3][3],Adj[3][3],Inv[3][3],temp[2][2],det=0,minorDet;
int i,j,row,col,p,q;
printf("Enter elements of 3x3 matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%f",&A[i][j]);
}
}
printf("\nOriginal Matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%8.2f ",A[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
T[j][i]=A[i][j];
}
}
printf("\nTranspose of Matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%8.2f ",T[i][j]);
}
printf("\n");
}
det=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
printf("\nDeterminant of Matrix: %.2f\n",det);
if(det==0){
printf("\nMatrix is singular and cannot be inverted.\n");
return 0;
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
p=0;q=0;
for(row=0;row<3;row++){
for(col=0;col<3;col++){
if(row!=i&&col!=j){
temp[p][q++]=A[row][col];
if(q==2){q=0;p++;}
}
}
}
minorDet=temp[0][0]*temp[1][1]-temp[0][1]*temp[1][0];
if((i+j)%2==0)Cof[i][j]=minorDet;else Cof[i][j]=-minorDet;
}
}
printf("\nCofactor Matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%8.2f ",Cof[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
Adj[j][i]=Cof[i][j];
}
}
printf("\nAdjoint Matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%8.2f ",Adj[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
Inv[i][j]=Adj[i][j]/det;
}
}
printf("\nInverse Matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%8.4f ",Inv[i][j]);
}
printf("\n");
}
return 0;
}







