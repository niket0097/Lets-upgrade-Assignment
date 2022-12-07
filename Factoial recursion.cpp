#include<iostream>

using namespace std;


int fact(int n)
{
	if(n>1)
	  return n*fact(n-1);
	else 
	  return 1;
	
}

int main()
{
	int n;
	
	cout<<"Enter number to find factorial ";
	cin>>n;
	
	if(n<0)
	{
		cout<<"ERROR!!";
		return 1;
	}
	
	cout<<" Answer is = "<<fact(n);	
	return 0;
	
}
