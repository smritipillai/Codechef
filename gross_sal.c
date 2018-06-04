 /*submitted by: Smriti Pillai*/

   #include<stdio.h>
    int main()
     
    {
    	int t;
    	float s,hra,da,gs;
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%f",&s);
    		if(s<1500)
    		{
    			hra=s*0.1;
    			da=s*0.9;
    			gs=s+hra+da;
    		}
    		if(s>=1500)
    		{
    			hra=500;
    			da=s*0.98;
    			gs=s+hra+da;
    		}
    		printf("%.2f\n",gs);
    		
    	}
    	
    }  
