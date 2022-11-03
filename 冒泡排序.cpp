#include<iostream>
using namespace std;
int main()
{
	int i,j,t;
	int arr[7];
	for(i=0;i<=6;i++)
		cin>>arr[i];
	for(i=1;i<=6;i++)
	{
		for(j=0;j<=6-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	} 
	for(i=0;i<=6;i++)
		cout<<arr[i];
}


