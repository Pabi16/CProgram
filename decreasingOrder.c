#include<stdio.h>
int main()
{
    int t,size;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&size);
        int a[size-1],i,j,temp;
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            printf("%d ",a[i]);
        }
    }
    return 0;
}
