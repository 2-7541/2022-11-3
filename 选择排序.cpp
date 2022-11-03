#include<iostream>
using namespace std;
int main()
{
	int arr[6];
	int i,j,t;
	int flag;
	for(i=0;i<=6;i++)
		cin>>arr[i];
	for(i=0;i<6-1;i++)
	{
		flag=i;
		for(j=i+1;j<=6-1;j++)
		{
			if(arr[j]>arr[flag])
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
	for(i=0;i<=6;i++)
		cout<<arr[i]<<ends;
} 
