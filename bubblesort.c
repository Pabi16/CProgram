#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int a[size],i,j,sum,temp;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
          if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
    sum=a[size-1]+a[size-2];
    printf("%d",sum);Z
    return 0;
}
