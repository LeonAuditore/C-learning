#include<iostream>

using namespace std;

int main()
{
	int n,i,j;

	cin>>n;
	double **data=new double*[n];
	
	for(i=0;i<n;i++)
	{
		data[i]=new double[n];
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>data[i][j];
		}
	}

	for(i=0;i<n;i++)
	{
		data[i][2]=1.0*data[i][1]/data[i][0];
	}

	for(i=1;i<n;i++)                                                              //判定不正确
	{
		if(data[i][2]-data[0][2]>0.05)cout<<"better"<<endl;
		else if(data[i][2]-data[0][2]<-0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	
	for(i=0;i<n;i++)
		delete []data[i];
	delete []data;
}