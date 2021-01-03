#include<iostream>

using namespace std;

int main()
{
	int R,M,Y,i;
	double result_point;
	
	cin>>R>>M>>Y;
	result_point=M;

	for(i=1;i<=Y;i++)
	{
		result_point*=(1+0.01*R);
	}

	M=result_point;
	cout<<M;

	return 0;
}