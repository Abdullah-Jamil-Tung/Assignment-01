/*8. Suppose an integer array a[5] = {1,2,3,4,5}.
Add more elements to it and display them in C++.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and assigning values
	int n, a[5] = {1, 2, 3, 4, 5}, b[5+n];
	
	cout<<"Enter the number of elements you want to add = ";
	cin>>n;
	cout<<endl;
	
	for (int i=0; i<5; i++)
	{b[i]=a[i];}
	for (int i=5; i<5+n; i++)
	{cout<<"Enter Element #"<<i-4<<" : ";
	cin>>b[i];
	cout<<endl;}
	
	//Displaying output
	cout<<"The Elements of a = ";
	for (int i=0; i<5+n; i++)
	{cout<<b[i]<<" ";}
	
	return 0;
}
