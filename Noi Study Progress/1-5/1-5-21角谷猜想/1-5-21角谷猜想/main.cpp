#include<iostream>

using namespace std;

void jiaogu(int x)
{
	while(x !=1){
		if (x%2 != 0){
			printf("%ld*3+1=%ld\n",x,x*3+1);
			x = x*3+1;
		}
		else {			
			printf("%ld/2=%ld\n",x,x/2);
			x=x/2;
		}
	}
	if (x==1)
		printf("End\n");
}

int main()
{
	long int n;
	
	scanf("%ld",&n);
	jiaogu(n);

	return 0;
}
