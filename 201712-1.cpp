#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int min=10000;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(abs(a[i]-a[j])<min)
				min=abs(a[i]-a[j]);
		}
	}
	cout<<min;
	return 0;
 } 
