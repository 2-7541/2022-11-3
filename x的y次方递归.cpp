#include<iostream>
using namespace std;
double cal(int x,int y)
{ 
	if(y==0)
		return 1;
	else
		return x*cal(x,y-1);
}
int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=cal(a,b);
	cout<<c;
	return 0;
} 
