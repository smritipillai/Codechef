/*submitted by: Smriti Pillai*/

    #include<stdio.h>
         
        int main()
        {
         long long a;
         
         scanf("%lld", &a);
         
         if((a%6==0)||(a%6==1)||(a%6==6)||(a%3==0))
           {
            printf("yes\n");
           }
         else
            printf("no\n");
         
          return 0;
        }   
