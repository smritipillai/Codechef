/*submitted by: Smriti Pillai*/




#include<stdio.h>
int main()
{
    int i,j,n,k,t,p,temp;
 
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        int a[n],b[n];
        for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        b[i]=a[i];
    }
    scanf("%d",&p);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        for(i=1;i<=n;i++)
        {
            if(a[i]==b[p])
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
	 
