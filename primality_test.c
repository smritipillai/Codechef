/* Solution by : Smriti Pillai */


    #include<stdio.h>
    int main()
    {
     	int t,n,i,cnt;
     	scanf("%d",&t);
     	while(t--)
     	{
     		cnt=0;
     		scanf("%d",&n);
     		if(n==1)
     		{printf("no\n");
     		continue;}
     		if(n==2)
     		{printf("yes\n");
     		continue;}
     		for(i=2;i<=n/2;i++)
     		{
     			if(n%i==0)
     			{
     			cnt=1;
     			break;
     			}
     		}
     		if(cnt==0)
     		{printf("yes\n");}
     		else
     		{printf("no\n");}
     		
     	}
     	return 0;
     }
     		
