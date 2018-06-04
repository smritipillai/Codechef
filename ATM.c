/*submitted by: Smriti Pillai */


  #include<stdio.h>
    int main()
    {
    	int x;
    	float y;
    	scanf("%d %f",&x,&y);
    	if(x<=2000 && x>0 && y>=0 && y<=2000 )
    	{
    		if(x%5==0 && x+0.5<=y)
    		{
    			printf("%.2f",y-x-0.5);
    		}
    		else
    		{
    			printf("%.2f",y);
    		}
    	}
    	return 0;
    } 
