#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n,i,j;

	cin>>n;

	double **p=new double*[n]; 

	for(i=0;i<n;i++)
	{
		if(i>=6){j=i;p[i]=new double[j];}
		else p[i]=new double[5];
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>p[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		p[i][3]=sqrt(p[i][0]*p[i][0]+p[i][1]*p[i][1]);
	}

	for(i=0;i<n;i++)
	{
		p[i][4]=1.0*p[i][3]/50;
	}

	for(i=0;i<n;i++)
	{
		p[i][5]=p[i][2]*1.5+p[i][4];
	}

	for(i=0;i<n;i++)
	{
		cout<<p[i][5];
	}

	return 0;
}