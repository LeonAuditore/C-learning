#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double N,k,price,money;
	int i,judge;

	cout<<"���������Ա��н"<<endl;
	cin>>N;

	cout<<"�����뷿��������"<<endl;
	cin>>k;

	price = 200;
	judge = 0;

	for(i=1;i<=20;i++)
	{
		price=price*(1+k*0.01);
		money = i*N;
		if(price/(1+k*0.01) <= i*N)
		{
			cout<<i<<endl;
			judge =1;
			break;
		}
	}
	if (judge != 1)
		cout<<"Impossible"<<endl;

	return 0;
}