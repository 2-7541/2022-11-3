#include<iostream>
using namespace std;
int min(int x,int y)
{
	if(x<y)
		return x;
	else
		return y;
}
int main()
{
	int a,b,c,d,min1,min2;
	cin>>a>>b>>c>>d;
	min1=min(min(a,b),c);
	min2=min(min1,d);
	cout<<min2;
	return 0;
} 
