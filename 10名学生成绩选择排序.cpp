#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i,j,t,flag;
	for(i=0;i<=9;i++)
		cin>>arr[i];
	for(i=0;i<=9;i++)
	{
		flag=i;
		for(j=i+1;j<=9;j++)
		{
			if(arr[j]<arr[flag])
			{
				flag=j;
			}
		}
		if(flag!=i)
		{
			t=arr[flag];
			arr[flag]=arr[i];
			arr[i]=t;
		}
	}
		for(i=0;i<=9;i++)
			cout<<arr[i]<<ends;
} 
