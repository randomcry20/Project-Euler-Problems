#include<bits/stdc++.h>
using namespace std;
int main()
{	
	long long int benchmark=4000000;
	long long int c,b,a,temp,sum=2;
		a=1;
		b=2;
		c=3;
		while(c<benchmark)
		{	
			temp=a;
			a=b;
			b=c;
			c=a+b;
				if (c%2==0 && c<benchmark)
					sum=sum+c;
			cout<<c<<"\n";
		}
	cout<<"The sum of even terms is "<<sum<<"\n";
}