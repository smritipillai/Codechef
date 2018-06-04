  /*submitted by: Smriti Pillai*/


  #include <stdio.h> 
    #include <math.h>
    int main() 
    {
    	int x1,y1,x2,y2,x3,y3,a,b,c,count=0,n,i;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{  
    		scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    		a=pow((x2-x1),2)+pow((y2-y1),2);
    		b=pow((x3-x2),2)+pow((y3-y2),2);
    		c=pow((x3-x1),2)+pow((y3-y1),2);
    	        if(a>b && a>c)
    	   	{
    			if(a==b+c)
    			count++;
    		}
    		else if((b>a)&&(b>c))
    		{
    			if(b==a+c)
    			count++;
    		}
    		else
    		{
    			if(c==a+b)
    			count++;
    		}
    	}
    	printf("%d",count);
    	return 0;
    }     
