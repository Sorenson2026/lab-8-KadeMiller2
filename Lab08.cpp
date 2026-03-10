//Kade Miller 3/10/26 Lab08 
#include <iostream>
#include <iomanip>
using namespace std;

/*This program processes a sequence of integers from 1 to 10 and outputs
the count, minimum, maximum and average of the entered values*/ 
int main()
{
	//Create variables
	int num1, num2, count = 0, min, max, sum;
	float average;

	//Greeting
	cout << "This program processes a sequence of integers from 1 to 10 and outputs ";
	cout << "the count, minimum, maximum and average of the entered values. " << endl;

	//Prompt user for initial number
	cout << "\nEnter an integer (0 to quit): ";
	cin >> num1;

	//create a sum to calculate average later
	sum = num1;

	//assign max and min to num1
	max = num1;
	min = num1;

	//Create loop
	if (num1 != 0)
	{
		do
		{
			//prompt user for another number
			cout << "Enter another integer (0 to quit): ";
			cin >> num2;

			//use this loop to find max and min
			if (num2 > max)
				max = num2;
			else if (num2 != 0 && num2 < min)
				min = num2;

			//add new number to previous sum
			sum += num2;

			//increment count
			count += 1;
		} while (num2 != 0); 

		//calculate average
		average = static_cast<float>(sum) / count;

		//output values
		cout << endl;
		cout << "Count Min  Max  Average" << endl;
		cout << left << setw(6) << count;
		cout << setw(5) << min;
		cout << setw(5) << max;
		cout << setw(5) << setprecision(3) << average;
	} 
	return 0;
}