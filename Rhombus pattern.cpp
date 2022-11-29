//Rhombus pattern printing

#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the lenght of sides of Rhombus: ";
	cin>>n;
	
	
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			for(j=0;j<n-1;j++)
			 cout<<"  ";
			
			for(j=0;j<n;j++)
			 cout<<" *";
		}
		
		else if(i==n-1)
		{
			for(j=0;j<n;j++)
			 cout<<" *";
		}
		
		else
		{
			for(j=0;j<2*n-1-i;j++)
			{
				if(j==n-1-i||j==2*n-2-i)
				   cout<<" *";
				else
				  cout<<"  ";
				
				
			}
			
		}
		
	
		cout<<endl;
	}
	
	
		return 0;
	
}
