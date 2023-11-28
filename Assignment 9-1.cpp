/*9. Given an integer array and an integer X. 
Find if there’s a triplet in the array which sums up to the given integer X.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and assigning values
	int X=9;
	int a[6] = {0, 1, 2, 3, 4, 5};
	
	//Computing result and displaying output
	cout<<"Different combinations of triplets\n\n";
	for (int i=0; i<6; i++)
	{
	for (int j=0; j<6; j++)
	{
	for (int k=0; k<6; k++)
	{if (((i != j) && (j != k) && (k != i)) && a[i]+a[j]+a[k] == X)
	{cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;}}}}
}
