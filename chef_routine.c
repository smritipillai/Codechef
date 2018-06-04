 /*submitted by: Smriti Pillai*/



   #include<stdio.h>
    #include<string.h>
    int main()
    {
    	int cnt,t,n;
    	char s[100000];
    	scanf("%d",&t);
    	while(t--)
    	{
    		cnt=1;
    		scanf("%s",s);
    		n=strlen(s)-1;
    		for(int i=0;i<n;i++)
    		{   if(s[i]>s[i+1])
               	     { 
               		cnt=0;
               		 break;
              	     }
           	        }
           	        if(cnt==1)
           	        printf("yes\n");
           	        if(cnt==0)
           	        printf("no\n");
           	 }
           	 return 0;
    }
    	 
