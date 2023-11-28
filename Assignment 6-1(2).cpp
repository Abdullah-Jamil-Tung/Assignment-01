/*6.  Perform division in C++ without / using for loops. You can use / only to display the final results. 
    Your dividend must be greater than divisor.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and taking inputs
	int dividend, divisor, remainder, quotient = 0;
	
	cout<<"Enter the values to perform division :\n\n";
	cout<<"Dividend = ";
	cin>>dividend;
	cout<<"Divisor = ";
	cin>>divisor;
	cout<<"\n\n";
	//Checking for Invalid conditions
	if (dividend<=divisor || divisor==0)
	{cout<<"Invalid Input."<<endl;}
	
	else
	//Computing values using for loops and displaying output
    {for (int n=dividend; n>=divisor; n-=divisor)
	{quotient++;}
	cout<<"Using for loops,\n\n";
	cout<<dividend<<"/"<<divisor<<" = "<<quotient<<"\n\n";
	
	//Computing values using dividend formula and displaying output
	remainder = dividend%divisor;
	quotient = (dividend-remainder)/divisor;
	
	cout<<"Using dividend formula,\n\n";
	cout<<"("<<dividend<<"-"<<remainder<<")"<<"/"<<divisor<<" = "<<quotient;}
}
