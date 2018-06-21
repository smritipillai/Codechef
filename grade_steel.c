 /*submitted by : Smriti Pillai*/


   #include<stdio.h>
    #include<stdbool.h>
    
    int main()
    {
        int a,c,i,d;
        float b;
        int p,q,r;
        scanf("%d",&d);
        for(i=0;i<d;i++)
        {
            p=0;
            q=0;
            r=0;
            scanf("%d%f%d" ,&a,&b,&c);
            
            //checks the three conditions 
                if(a>50)
                p=1;
                if(b<0.7)
                q=1;
                if(c>5600)
                r=1;
             
            //depending on the p,q and r value it gives the grade
            if(p==1&&q==1&&r==1)
            printf("10\n");
            else if(p==1&&q==1)
            printf("9\n");
            else if(q==1&&r==1)
            printf("8\n");
            else if(p==1&&r==1)
            printf("7\n");
            else if((p==1&&q==0&&r==0||p==0&&q==1&&r==0||p==0&&q==0&&r==1))
            printf("6\n");
            else if(p==0 && q==0 && r==0)
            printf("5\n");
        }
    } 
