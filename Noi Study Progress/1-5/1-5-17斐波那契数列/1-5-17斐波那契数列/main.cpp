#include<iostream>

using namespace std;

int main()
{
	int a,b,c,k,i;
	
	a=1;
	b=1;

	cin>>k;

	if(k==1||k==2)cout<<"1";
	for(i=0;i<=k-3;i++)
	{
		c=a+b;
		if(i==k-3)
		{
			cout<<c;
			break;
		}
		a=b;
		b=c;
	}
	return 0;
}