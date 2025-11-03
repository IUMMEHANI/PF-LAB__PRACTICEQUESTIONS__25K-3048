#include <stdio.h>
int main(){
char str[100];
int i=0;
printf("Enter a sentence:\n");
scanf("%[^\n]",str);
while(str[i]!='\0'){
if(str[i]>='A'&&str[i]<='Z')str[i]=str[i]+32;
else if(str[i]>='a'&&str[i]<='z')str[i]=str[i]-32;
i++;
}
printf("\nConverted message:\n%s\n",str);
return 0;
}
