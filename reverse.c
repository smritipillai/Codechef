 /*submitted by: Smriti PIllai */ 



  #include <stdio.h>
    int main()
    {
        int t,n;
        scanf("%d",&t);
        while(t--)
        {
            int rev=0,r=0 ;
            scanf("%d\n",&n);
            while(n>0)
            {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
            }
            printf("%d\n",rev);
        }
        return 0;
    }  
