/*submitted by :  Smriti Pillai*/



    #include <stdio.h>
    int gcd(int a, int b){
        int r=a%b;
        while(r>0){
            a=b;
            b=r;
            r=a%b;
        }
        return b;
    }
    int main(void) {
    	
    	long int t,a,b,c,d;
    	scanf("%ld",&t);
    	while(t>0){
    	    scanf("%ld%ld",&a,&b);
    	    c=gcd(a,b);
    	    d=a*b/c;
    	    printf("%ld %ld\n",c,d);
    	    t--;
    	}
    	return 0;
    }  
