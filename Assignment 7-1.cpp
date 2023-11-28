/*7. Write a C++ program for a string which may contain lowercase and uppercase characters.
The task is to remove all duplicate characters from the string and find the resultant string.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//Declaring string
	string a = "Hello";
	
	//Computing result
	for (int i=0; i<a.length(); i++)
	{
	for (int j=0; j<a.length(); j++)
	{if (i != j)
	{if (a[i] == a[j])
	{a[j] = a[j+1];
	a[j+1] = ' ';}}}}
	
	//Displaying output
	cout<<"The string is : ";
	for (int i=0; i<a.length(); i++)
	{
	if (a[i] == ' ')
	{a[i] = a[i+1];
	a[i+1] = ' ';
	cout<<a[i];}
	else
	{cout<<a[i];}
	}
}
