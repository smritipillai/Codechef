/* Submitted by: Smriti Pillai */




    #include<stdio.h>
    int main()
    {
    	long long int t,c,n;
    	double r=0;
    	scanf("\n%lld",&t);
    	while(t--)
    	{
    		scanf("%lld%lld\n",&c,&n);
    		if(c<1000)
    		r=c*n;
    		else if(c>1000)
    		r=c*n-0.1*(c*n);
    		printf("%lf\n",r);
    	}
    	return 0;
    }  
