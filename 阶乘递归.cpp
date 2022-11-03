#include<iostream>
using namespace std;
double Factoria(int n)
{
	if(n==1)
		return 1;
	else
		return n*Factoria(n-1);
}
int main()
{
	int a;
	double b;
	cin>>a;
	b=Factoria(a);
	cout<<b;
	return 0;
	
} 
