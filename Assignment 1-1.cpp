/*1. Write a C++ program to display factors of a number using for loops.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and assigning values
	int number = 100;
	cout<<"The factors of "<<number<<" are : ";
	
	//Computing result and displaying output
	for (int i=1; i<=number; i++)
	{
	if (number%i == 0)
	cout<<i<<" ";
	}
	cout<<endl;
}
