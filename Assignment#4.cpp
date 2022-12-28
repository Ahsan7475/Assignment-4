 //       Ahsan Ali             //   
//       section CS (1st D)    //


#include<iostream>
using namespace std;
int main()
{
	{
		int Num[10];
		int sum=0;
		int i;
	
			cout<<"Enter 10 Number for Sum:"<<endl;
	
	for(int i=0;i<10;i++)
		{cin>>Num[i];}
	
	for(i=0;i<10;i++)
		{	
		if(i==3)
			{continue;}
		else 
		if(i==5)
			{continue;}
	
			sum=sum+Num[i];
	
			cout<<"Sum of Numbers without index 3 and 5: ";
	
			cout<<sum<<endl;
		}
	}
	{
		int NUM[10];
		int j;
			cout<<"Enter 10 numbers:"<<endl;
			for(int j=0;j<10;j++)
			cin>>NUM[j];

			for(int j=10;j>=0;j--)
			cout<<NUM[j]<<" "<<endl;
	}
}

