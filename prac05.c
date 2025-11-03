#include <stdio.h>
int main(){
int i,j,k,l,same;
float A[3][3][3];
printf("Enter elements of 3x3x3 matrix:\n");
for(i=0;i<3;i++){
printf("\nLayer %d:\n",i+1);
for(j=0;j<3;j++){
for(k=0;k<3;k++){
scanf("%f",&A[i][j][k]);
}
}
}
for(i=0;i<3;i++){
printf("\nLayer %d:\n",i+1);
for(j=0;j<3;j++){
for(k=0;k<3;k++){
printf("%6.2f ",A[i][j][k]);
}
printf("\n");
}
}
printf("\nLayer Similarity Analysis:\n");
for(i=0;i<2;i++){
for(l=i+1;l<3;l++){
same=1;
for(j=0;j<3;j++){
for(k=0;k<3;k++){
if(A[i][j][k]!=A[l][j][k]){
same=0;
break;
}
}
if(!same)break;
}
if(same)printf("Layer %d and Layer %d are IDENTICAL.\n",i+1,l+1);
else printf("Layer %d and Layer %d are DISTINCT.\n",i+1,l+1);
}
}
return 0;
}
