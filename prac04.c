#include <stdio.h>
int main(){
int i,j,k;
float A[3][3][3],layerSum[3]={0},total=0,max,min,avg;
printf("Enter elements of 3x3x3 matrix:\n");
for(i=0;i<3;i++){
printf("\nLayer %d:\n",i+1);
for(j=0;j<3;j++){
for(k=0;k<3;k++){
scanf("%f",&A[i][j][k]);
}
}
}
max=A[0][0][0];
min=A[0][0][0];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
for(k=0;k<3;k++){
layerSum[i]+=A[i][j][k];
total+=A[i][j][k];
if(A[i][j][k]>max)max=A[i][j][k];
if(A[i][j][k]<min)min=A[i][j][k];
}
}
}
avg=total/27.0;
for(i=0;i<3;i++){
printf("\nLayer %d:\n",i+1);
for(j=0;j<3;j++){
for(k=0;k<3;k++){
printf("%6.2f ",A[i][j][k]);
}
printf("\n");
}
printf("Sum of Layer %d = %.2f\n",i+1,layerSum[i]);
}
printf("\nOverall Total = %.2f\nAverage = %.2f\nMaximum = %.2f\nMinimum = %.2f\n",total,avg,max,min);
return 0;
}
