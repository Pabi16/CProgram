#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int left=0,right=strlen(str)-1;
    while(left<right){
        if(!isalpha(str[left])){
            left++;
        }
        else if (!isalpha(str[right])) {
            right--;
        }
       else {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
    printf("Reversed string: %s\n", str);
    return 0;
}

