#include <stdio.h>
int main(){
int i,j,a[10];
printf("Enter 10 integers:\n");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
if(a[i]==a[j]&&a[j]!=-1){
a[j]=-1;
}
}
}
printf("\nUpdated Array:\n");
for(i=0;i<10;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
