#include<iostream>
#include<math.h>
using namespace std;
double distance(double x1,double y1,double x2,double y2)
{
	int a,d;
	a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	d=(double)sqrt(a);
	return d;
}
int main()
{
	double e,f,g,h,D;
	cin>>e>>f>>g>>h;
	D=distance(e,f,g,h);
	cout<<D;
	return 0;
} 
