/*submitted by: Smriti Pillai */


   #include<stdio.h>
    #include<math.h>
     
    int main()
    {
    	int i,t;
    	long int P,S;
    	float r,w,q;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d %d",&P,&S);
    		r=(P-(float)sqrt((float)(P*P-24*S)))/12;
    		q=((S/2)-P*(r/4)+(r*r));
    		w=r*q;
    		printf("%.2f\n",w);
    	}
    	return 0;
    }   
