#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];	
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	b[0] = (a[0] + a[1])/2;
	b[n-1] = (a[n-2] + a[n-1])/2;
	for(int i = 1; i < n-1; i++)
	{
		b[i] = (a[i-1] + a[i] + a[i+1])/3;
	}
	for(int i = 0; i < n; i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
} 
