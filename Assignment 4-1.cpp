/*4. Write a C++ program that uses a while loop to find the largest prime number less than a given positive integer N.
 Your program should take the value of N as input from the user and then find the largest prime number less than or equal to N.
  You are not allowed to use any library or pre-existing functions to check for prime numbers.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and taking inputs
	int N, number=2, prime_number;
	cout<<"Enter the value of N = ";
	cin>>N;
	cout<<endl;
	
	//Computing values and displaying output
	if (N<=1)
	{cout<<"Invalid Input."<<endl;}
	
	else
	{ 
	    while (number<=N)
	    {
	    	int i=2;
	    	while (i<number)
            {i++;
			if (number%i == 0)
            {break;}
            if (number%i != 0)
		    {if (i == number-1)
		    {prime_number = number;}
		
		    else
		    {continue;}}}
		    number++;
		}
   }
	cout<<"The largest prime number less than or equal to N is "<<prime_number<<"."<<endl;
}
