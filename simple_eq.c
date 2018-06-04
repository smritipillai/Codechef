 /*submitted by : Smriti Pillai*/  


  #include<stdio.h>
         
        int main()
        {
            int t, n, a, b, c, i, j;
            unsigned long long count;
         
            scanf("%d",&t);
         
            while(t--)
            {
                count=0;
                scanf("%d %d %d %d",&n,&a,&b,&c);
         
                for(i=0;(i<=n && i<=a);i++)
                {
                    for(j=0;(j<=(n-i) && j<=b);j++)
                    {
                        if(c>(n-i-j))
                            count+=n-i-j+1;
                        else
                            count+=c+1;
                    }
                }
                printf("%llu\n",count);
            }
        } 
