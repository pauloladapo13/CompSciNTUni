// Session3.cpp : Defines the entry point for the console application.
// Exercise 1
// Framework for experimentation with loops and arrays
// Part A
// Correct the errors in the program
// Check it gives the correct answer
// 
// Part B
// Add checks for the input to only allow numbers in the range 1 to 100
// Then modify it so that it averages over 10 days instead
// Suggest other ways to improve the code

#include <iostream>
using namespace std;

int main()
{
	int pollution_level[6];
	int average;
	int counter =0;  

	while (counter<=6) 
	{
		cout<<"Enter pollution level for day "<<counter<<" range (1-100): ";
		cin>>pollution_level[counter];
		average = average + pollution_level[counter];
	}
	cout<<endl;
	cout<< "The average pollution level over those 6 days was:"<<average/6<<endl;

	return 0;
}


