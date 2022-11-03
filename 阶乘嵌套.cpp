#include<iostream>
using namespace std;
double fact(int m)
{
	double p=1;
	int i;
	for(i=0;i<m;i++)
	{
		p=p*i;
	}
	return p;
}
double bin(int n,int k)
{
		double d;
		d=fact(n)/(fact(k)*fact(n-k));
		return d;
}
int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=bin(a,b);
	cout<<c;
} 
