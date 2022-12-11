#include<iostream>

using namespace std;


void shift(int* a,int* b,int*c)
{
	int temp =*a;
	*a=*c;
	
	*c=*b;
	
	*b=temp;	
	
}

int main()
{
	int x,y,z;
	
	cout<<"Enter values of 3 integer ";
	cin>>x>>y>>z;
	
	cout<<"\nOriginal value:    x= "<<x<<" ; y= "<<y<<" ; z= "<<z;
	shift(&x,&y,&z);
	cout<<"\nValue after shifting to right: of x= "<<x<<" ; y= "<<y<<" ; z= "<<z;
	
	return 1;	
	
}
