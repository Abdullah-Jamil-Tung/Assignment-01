/*5. Write a C++ program, take two string as input from user and check if both strings are equal or not.
 If they are equal make them unequal by rotating string. e.g., Hello is turned into olleH etc.*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a,b;
	cout<<"Enter the first word : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the second word : ";
	cin>>b;
	cout<<endl;
	
	for (int i=0; i<a.length(); i++)
	{
	cout<<a[i]<<" = "<<b[i];
	if (a[i] == b[i])
	cout<<"  (Equal)"<<endl;
	else
	cout<<"  (Not Equal)"<<endl;
    }
    cout<<endl<<endl;
    if (a == b)
    {cout<<"The string is now : ";
    for (int i=0; i<=a.length(); i++)
    {b[i] = a[a.length()-i-1];
    cout<<b[i];}}
    
    else
    cout<<"The strings are not equal."<<endl;
    
	return 0;
}
