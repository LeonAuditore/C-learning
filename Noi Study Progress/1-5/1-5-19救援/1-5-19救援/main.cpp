#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,n,i;
	float x,y,sum=0,c,d;
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%f %f %d",&x,&y,&a);
		c=sqrt(x*x+y*y);
		d=c/50.0;
		sum=sum+1.5*a+d*2;
	}
	b=sum;
	if(sum-b>0)
	{
		b++;
	}
	printf("%d\n",b);
	return 0;
}