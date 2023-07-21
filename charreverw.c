#include<stdio.h>
int main()
{
    int i,j;
    char a[10];
    for(i=0;i<10;i++)
    {
        scanf("%c",&a[i]);
    }
    int range;
    scanf("%d",&range);
    for(j=0;j<range+1;j++)
    {
        printf("%c",a[j]);
    }
    for(i=10;i>range;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
