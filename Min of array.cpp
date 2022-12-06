#include<iostream>

using namespace std;

int main()
{
	int a[100], n, min,i;
	
	cout<<"Enter the size of array ";
	cin>>n;
	cout<<"Enter the elements of array ";
		
	for(i=0;i<n;i++)
	  cin>>a[i];
	  
	min=a[0];  
	for(i=0;i<n;i++)
	{
		if(a[i]<min) min=a[i];		
	}
	
	cout<<"Minimum element of the array is "<<min;
	
	return 0;	
	
}
