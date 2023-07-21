#include<stdio.h>
int main(){
    char str[100],a;
    int i,count=0;
    scanf("%c %[^\n]s",&a,&str);
    for(i=0;str[i]!='\0';i++){
        if(a==str[i]){
            count++;
            break;
        }}
        if(count==1){
            printf("Present");
        }
        else{
                printf(" Not Present");

        }
    }
