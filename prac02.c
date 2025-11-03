#include <stdio.h>

int main(){
int i,j,n, k,m;
float A[5][5],B[5][5],prod[5][5]={0},det=0;
int isSquare=0,isZero=1,isIdentity=1,isDiagonal=1,isScalar=1,isUpper=1,isLower=1,isSym=1,isSkew=1,isRow=0,isCol=0,isNull=1,isIdempotent=1,isNilpotent=1,isEqual=1;

printf("Enter rows and columns of matrix A (max 5): ");
scanf("%d %d",&n,&m);

printf("Enter elements of matrix A:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%f",&A[i][j]);
}
}

printf("\nMatrix A:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%6.2f ",A[i][j]);
}
printf("\n");
}

if(n==m)isSquare=1;
if(n==1&&m>1)isRow=1;
if(m==1&&n>1)isCol=1;

for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(A[i][j]!=0)isNull=0;
}
}

if(isNull){
printf("\nMatrix is a Null / Zero Matrix.\n");
return 0;
}

if(isSquare){
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(A[i][j]!=0)isZero=0;
if(i==j){
if(A[i][j]!=1)isIdentity=0;
}else{
if(A[i][j]!=0)isIdentity=0;
}
if(i!=j&&A[i][j]!=0)isDiagonal=0;
if(i!=j&&A[i][j]!=0)isScalar=0;
if(i>j&&A[i][j]!=0)isLower=0;
if(i<j&&A[i][j]!=0)isUpper=0;
if(A[i][j]!=A[j][i])isSym=0;
if(A[i][j]!=-A[j][i])isSkew=0;
}
}
float diagVal=A[0][0];
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(i==j&&A[i][j]!=diagVal)isScalar=0;
}
}

for(i=0;i<n;i++){
for(j=0;j<m;j++){
prod[i][j]=0;
for( k=0;k<n;k++){
prod[i][j]+=A[i][k]*A[k][j];
}
}
}

isIdempotent=1;
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(prod[i][j]!=A[i][j])isIdempotent=0;
}
}

float A2[5][5]={0},A3[5][5]={0};
for(i=0;i<n;i++){
for(j=0;j<m;j++){
for( k=0;k<n;k++){
A2[i][j]+=A[i][k]*A[k][j];
}
}
}
for(i=0;i<n;i++){
for(j=0;j<m;j++){
for( k=0;k<n;k++){
A3[i][j]+=A2[i][k]*A[k][j];
}
}
}
isNilpotent=1;
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(A3[i][j]!=0)isNilpotent=0;
}
}

if(n==2){
det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
}else if(n==3){
det=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
}else if(n==1){
det=A[0][0];
}

printf("\nMatrix Types:\n");
if(isSquare)printf("Square Matrix\n");else printf("Rectangular Matrix\n");
if(isZero)printf("Zero Matrix\n");
if(isIdentity)printf("Identity Matrix\n");
if(isDiagonal)printf("Diagonal Matrix\n");
if(isScalar)printf("Scalar Matrix\n");
if(isUpper)printf("Upper Triangular Matrix\n");
if(isLower)printf("Lower Triangular Matrix\n");
if(isSym)printf("Symmetric Matrix\n");
if(isSkew)printf("Skew-Symmetric Matrix\n");
if(isRow)printf("Row Matrix\n");
if(isCol)printf("Column Matrix\n");
if(isNull)printf("Null Matrix\n");
if(isIdempotent)printf("Idempotent Matrix\n");
if(isNilpotent)printf("Nilpotent Matrix\n");
if(isSquare){
if(det==0)printf("Singular Matrix\n");
else printf("Non-Singular Matrix\n");
}
}

printf("\nDo you want to check if two matrices are equal? (1 for Yes, 0 for No): ");
int choice;
scanf("%d",&choice);
if(choice==1){
int r2,c2;
printf("Enter rows and columns of second matrix B: ");
scanf("%d %d",&r2,&c2);
if(r2!=n||c2!=m){
printf("Matrices are not equal (different dimensions).\n");
return 0;
}
printf("Enter elements of matrix B:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%f",&B[i][j]);
}
}
isEqual=1;
for(i=0;i<n;i++){
for(j=0;j<m;j++){
if(A[i][j]!=B[i][j])isEqual=0;
}
}
if(isEqual)printf("\nMatrices are Equal.\n");
else printf("\nMatrices are Not Equal.\n");
}
return 0;
}
