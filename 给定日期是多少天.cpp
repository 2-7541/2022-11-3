#include<iostream>
using namespace std;
int year(int n)
{
	int f;
	if(n%4==0&&n%100!=0||n%100==0&&n%400==0)
		return f=1;
	else
		return f=0; 
}
int days(int y,int m,int d)
{
	int D,g,h,i;
	switch(m)
	{
		case 1:
			D=d;
			return D;
		case 2:
			D=31+d;
			return D;
		case 3:
			D=31+28+d;
			return D;
		case 4:
			D=31+28+31+d;
			return D;
		case 5:
			D=31+28+31+30+d;
			return D;
		case 6:
			D=31+28+31+30+31+d;
			return D;
		case 7:
			D=31+28+31+30+31+30+d;
			return D;
		case 8:
			D=31+28+31+30+31+30+31+d;
			return D;
		case 9:
			D=31+28+31+30+31+30+31+31+d;
			return D;
		case 10:
			D=31+28+31+30+31+30+31+31+30+d;
			return D;
		case 11:
			D=31+28+31+30+31+30+31+31+30+31+d;
			return D;	
		case 12:
			D=31+28+31+30+31+30+31+31+30+31+30+d;
			return D;			
	}
	g=year(i);
	if(g==1&&y>2)
		return h=D+g;
	else
		return h=D;

}
int main()
{
	int a,b,c,e;
	cin>>a>>b>>c;
	e=days(a,b,c);
	cout<<e;
	return 0;	
}
