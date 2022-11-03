#include<iostream>
using namespace std;
int main()
{
	double arr[10];
	int i;
	for(i=0;i<=9;i++)
		cin>>arr[i];
	double ave,l,sum;
	l=sizeof(arr)/sizeof(double);
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	ave=sum/l;
	int a=0,b=0,c=0,d=0,e=0;
	for(i=0;i<=9;i++)
	{
		if(arr[i]/10==9)
			a++;
	}
	for(i=0;i<=9;i++)
	{
		if(arr[i]/10==8)
			b++;
	}
	for(i=0;i<=9;i++)
	{
		if(arr[i]/10==7)
			c++;
	}
	for(i=0;i<=9;i++)
	{
		if(arr[i]/10==6)
			d++;
	}
	for(i=0;i<=9;i++)
	{
		if(arr[i]/10<6)
			e++;
	}
	cout<<a<<ends<<b<<ends<<c<<ends<<d<<ends<<e<<endl;
	cout<<ave;
} 
