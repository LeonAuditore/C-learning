#include<iostream>

using namespace std;

int main()
{
	int i;
	double h,l;

	l = 0;

	cout<<"请输入初始高度"<<endl;
	cin>>h;

	for(i=1;i<=10;i++)
	{
		l = l+h;
		h=h/2;
		l = l+h;
	}

	l=l-h;
	cout<<l<<endl<<h<<endl;

	return 0;
}