#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i,j,t;
	for(i=0;i<=9;i++)
		cin>>arr[i];
	for(i=1;i<=9;i++)
	{
		for(j=0;j<=9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(i=0;i<=9;i++)
		cout<<arr[i]<<ends;
}
