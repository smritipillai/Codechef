#include <stdio.h>
 
int main(void)
{
    int tc;
    
    
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        int k;
        int c=0;
        scanf("%d %d",&n ,&k);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);   
        }
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]+k;
        }
        for(int i=0;i<n;i++)
        {
            if (a[i]%7==0)
                c++;
        }
    printf("%d",c);
    printf("\n");
    }
	return 0;
}
 
