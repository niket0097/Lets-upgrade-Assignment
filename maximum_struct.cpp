#include<iostream>

using namespace std;

struct player
{
	int score;
	
}p[10];

void high()
{
	int max=p[0].score;
	
	int i,c;
	
	for(i=0;i<10;i++)
	{
		if(p[i].score>max)
		{
			max=p[i].score;
			c=i+1;
		}
		
	}
	
	cout<<"Highest score is of player"<<c<<" and score is "<<max;
	
}


main()
{
	cout<<"Enter the score of the ten players ";
	int i;
	
	for(i=0;i<10;i++)
	{
		cin>>p[i].score;	
		
	}
	
	
	high();	
	
	
}


