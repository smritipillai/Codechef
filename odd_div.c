 /*submitted by: Smriti Pillai */




  #include<stdio.h>
    int main()
    {
    	int i,t,p,r;
    	long long int n2,n1;
    	scanf("%d",&t);
    	while(t--)
    	{
    		n2=0;
    		n1 = 0;
    		scanf("%d%d",&p,&r);
    		for(i=1;i<=r;i=i+2)
    			n2 = n2 + i*(r/i);
    		for(i=1;i<=p-1;i=i+2)
    			n1 = n1 + i*((p-1)/i);
    		printf("%lld\n",n2-n1);
    	}
    	return 0;
    }
    	 
