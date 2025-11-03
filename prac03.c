#include <stdio.h>
int main(){
int i,j,k,r1,c1,r2,c2;
float A[3][3],B[3][3],C[3][3]={0};
printf("Enter rows and columns of Matrix A: ");
scanf("%d %d",&r1,&c1);
printf("Enter elements of Matrix A:\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%f",&A[i][j]);
}
}
printf("Enter rows and columns of Matrix B: ");
scanf("%d %d",&r2,&c2);
if(c1!=r2){
printf("Matrix multiplication not possible.\n");
return 0;
}
printf("Enter elements of Matrix B:\n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%f",&B[i][j]);
}
}
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
C[i][j]=0;
for(k=0;k<c1;k++){
C[i][j]+=A[i][k]*B[k][j];
}
}
}
printf("\nMatrix A:\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("%6.2f ",A[i][j]);
}
printf("\n");
}
printf("\nMatrix B:\n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
printf("%6.2f ",B[i][j]);
}
printf("\n");
}
printf("\nResultant Matrix (A x B):\n");
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf("%6.2f ",C[i][j]);
}
printf("\n");
}
return 0;
}
