#include <iostream>
using namespace std;

int main() {
		
	int n,i;
	cin>>n;
	
	
	while(n!=0)
	{
	    i=n%10;
	    n=n/10;
	    
	   if(i!=0&&i!=1)
	    {
	        cout<<"The number is not in Binary representation";
	        return 1;
	    }
	    
	}
	
	cout<<"The number is in Binary representation";
	return 0;
}
