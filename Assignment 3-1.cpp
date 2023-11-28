/*3. Write a C++ program, take an integer value from user and check if it’s greater than 10 and less than equal to 20. 
    Print 1 if yes and print 0 if no. Use appropriate datatype for output.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and taking inputs
	int number;
	cout<<"Enter the number value = ";
	cin>>number;
	cout<<endl;
	
	if (number>10 && number<=20)
	cout<<true<<endl;
	
	else
	cout<<false<<endl;
	
	return 0;
}
