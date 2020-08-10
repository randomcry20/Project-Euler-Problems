#include<bits/stdc++.h>
using namespace std;
bool isprime(long long int test)
{	
	int flag=1;
	if(test!=1 && test!=2)
	{
		for(long long int s=2;s<test;s++) //This loop will check whether the number is prime or not! 
		{
			if(test%s==0)
			{
				flag=0;
				break;
			}
			else
				flag=1;
		}
		return flag;
	}
	else 
		return flag;	
}
int main()
{	
	long long int digit, prime,max=0;
	cin>>digit;
	for(long long int i=1;i<digit;i++) //This for loop will check for prime-factors! 
		{	
			if(isprime(i))
			{	
				if(digit%i==0)
					max=i;
			}
		}
		cout<<max<<"\n";
}