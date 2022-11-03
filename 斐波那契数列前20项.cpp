#include<iostream>
using namespace std;
int F(int n)
{
	if(n==1|n==2)
		return 1;
	else if(n>2)
		return F(n-1)+F(n-2);
}
int main()
{
	int n;
	for(n=1;n<=20;n++)
	{
		cout<<F(n)<<endl;
	} 
	return 0;
} 
