/*10. Implement Bubble Sort on an array of 6 integers.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaing variables and assigning values
	int num, a[6];
	
	cout<<"Enter the number values for bubble sorting :\n\n";
	
	for (int i=0; i<6; i++)
	{
	cout<<"Enter Value #"<<i+1<<" : ";
	cin>>a[i];
	cout<<endl;
	}
	
	
	//Computing bubble sort
	for (int i=0; i<6; i++)
	{
	for (int j=0; j<6; j++)
	{if (a[j+1] < a[j])
	{num = a[j];
	a[j] = a[j+1];
	a[j+1] = num;}}
	}
	
	//Displaying output
	cout<<"Bubble Sort = ";
	for (int i=0; i<6; i++)
	cout<<a[i]<<" ";
}
