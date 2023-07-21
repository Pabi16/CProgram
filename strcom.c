#include<stdio.h>
int main(){
   char str1[100],str2[100];
   int value;
   scanf("%s %s",str1,str2);
   value=strcmp(str1,str2);
   if(value==1){
    printf(" Not Equal");
   }
   else{
    printf("Equal");
   }
}

