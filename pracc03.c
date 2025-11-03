#include <stdio.h>
int main(){
int i=0,passCount=0,failCount=0;
float marks[10],pass[10],fail[10],pSum=0,fSum=0;
printf("Enter quiz marks of up to 10 students (-1 to stop):\n");
while(i<10){
scanf("%f",&marks[i]);
if(marks[i]==-1)break;
if(marks[i]>=5&&marks[i]<=10){
pass[passCount++]=marks[i];
pSum+=marks[i];
}
else if(marks[i]>=0&&marks[i]<5){
fail[failCount++]=marks[i];
fSum+=marks[i];
}
i++;
}
printf("\nPassed Students Marks:\n");
for(i=0;i<passCount;i++){
printf("%.2f ",pass[i]);
}
if(passCount>0)printf("\nAverage of Passed = %.2f\n",pSum/passCount);
else printf("\nNo passed students.\n");
printf("\nFailed Students Marks:\n");
for(i=0;i<failCount;i++){
printf("%.2f ",fail[i]);
}
if(failCount>0)printf("\nAverage of Failed = %.2f\n",fSum/failCount);
else printf("\nNo failed students.\n");
return 0;
}
