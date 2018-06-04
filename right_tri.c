/*submitted by: Smriti Pillai*/


#include<stdio.h>
#include<math.h>
int main()
{
	int T,H;
	long long S,P1,P2;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%lld",&H,&S);
		P1=(long long)H*H-4*S;
		if(P1>=0)
		{
			P2=(long long)H*H+4*S;
			printf("%lf %lf %lf\n",(sqrt(P2)-sqrt(P1))/2,(sqrt(P2)+sqrt(P1))/2,(double)H);
        }
        else printf("-1\n");
    }
    return 0;
}
