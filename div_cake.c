 /*submitted by: Smriti Pillai*/



  #include <stdio.h>
     
    int main() 
    {
        int T, N;
        scanf("%d", &T);
        for(int a=0; a<T; ++a)
        {
            scanf("%d\n", &N);
            if(360%N==0)
                printf("y ");
            else
                printf("n ");
            if(N<=360)
                printf("y ");
            else
                printf("n ");
            if(N<=26)
                printf("y\n");
            else
                printf("n\n");
        }
        return 0;
    } 
