#include<iostream>
using namespace std;

void arr(int a[][20], int r, int c)
{
	int i,j;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element "<<i<<j<<"  ";
			cin>>a[i][j];
		}
				
	}
	
}

void disp(int a[][20], int r, int c)
{
	int i,j;
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		
		cout<<endl;		
	}
	
}

void prod(int a[][20], int b[][20], int c[][20], int r1, int c1, int r2, int c2)
{
	
	int i,j,k;
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			
			for(k=0;k<c1;k++)
			{
			   c[i][j]+=a[i][k]*b[k][j];
		    }
			
		}
		
		
	}
	
}




int main()
{
	int a[20][20], b[20][20], c[20][20];
	
	int r1,c1,r2,c2;
	
	cout<<"Enter number of rows & columns in first  array 'A' ";
	cin>>r1>>c1;
	cout<<"Enter number of rows & coluumn in second array 'B' ";
	cin>>r2>>c2;
	
	if(c1!=r2)
	{
		cout<<"ERROR!!  \nCan't multiply";
		return 1;
		
	}
	
	cout<<"Enter the elements of first array 'A'\n";
	arr(a,r1,c1);
	
	cout<<"Enter the elements of second array 'B'\n";
	arr(b,r2,c2);
	
	cout<<"Array 'A' =\n\n";
	disp(a,r1,c1);
	cout<<"\nArray 'B' =\n\n";
	disp(b,r2,c2);
	
	cout<<"\nAxB =\n\n";
	prod(a,b,c,r1,c1,r2,c2);
	disp(c,r1,c2);
	
	return 0;
}
