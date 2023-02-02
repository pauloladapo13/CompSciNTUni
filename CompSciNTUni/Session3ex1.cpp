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
	short pollution_level[9];
	short average, counter = 0;
	short counter_str = 1;

	while (counter < 10) 
	{
		
		cout<<"Enter pollution level for day "<<counter_str <<" range (1-100): ";
		cin>>pollution_level[counter];
		if ((1 >= pollution_level[counter]) || (pollution_level[counter] <= 100)){
			
		}
		else{
			cout<<"please enter a digit between (1-100)";
			cout<<endl;
			cout<<"Enter pollution level for day "<<counter_str<<" range (1-100): ";
			cin>>pollution_level[counter];
		}
		average = average + pollution_level[counter];
		counter ++;
		counter_str = counter + 1;
		cout<<endl;

	}
		cout<< "The average pollution level over those 6 days was:"<<average/6<<endl;

	return 0;
}


