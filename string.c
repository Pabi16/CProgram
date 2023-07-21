#include<stdio.h>
int main(){
    char str[100];
    int i,count=0;
    scanf("%[^\n]s",&str);
    /*for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);*/
   /* for(i=0;str[i]!='\0';i++);
      printf("%d",i);  */
    printf("%d",strlen(str));
}
